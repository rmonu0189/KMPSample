#!/bin/bash

set -x

CACHE_DIR=~/mobile-common-framework
CURR_DIR=$pwd
SCRIPTS_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
REPO_ROOT_DIR="$SCRIPTS_DIR/.."
MOBILE_COMMON_PACKAGE="$REPO_ROOT_DIR/Libraries/MobileCommon"
GRADLE_ARGS="--no-daemon"

build_data_common() {
    git submodule update --init --recursive --depth=1
    cd "$REPO_ROOT_DIR/mobile-common"
    ./gradlew $GRADLE_ARGS clean;

    if [[ $1 = "release" ]]; then
        ./gradlew $GRADLE_ARGS linkReleaseFrameworkiOSArm64
        xcodebuild -create-xcframework -framework data-common/build/bin/iosArm64/releaseFramework/DataCommon.framework -output data-common/build/DataCommon-release.xcframework
    else
        ./gradlew $GRADLE_ARGS linkDebugFrameworkIosX64
        xcodebuild -create-xcframework -framework data-common/build/bin/iosX64/debugFramework/DataCommon.framework -output data-common/build/DataCommon-debug.xcframework
    fi

    cp -r data-common/build/*.xcframework $CACHE_DIR
    cd $CURR_DIR
}

# The built framework will be moved to the following directory for cacheing purposes.
mkdir -p $CACHE_DIR

if [ ! -d $CACHE_DIR/DataCommon-$1.xcframework ]; then
    build_data_common $1
fi

rm -r $MOBILE_COMMON_PACKAGE/Sources/Frameworks/DataCommon.xcframework
echo "Moving DataCommon.xcframework to MobileCommon package"
cp -r $CACHE_DIR/DataCommon-$1.xcframework $MOBILE_COMMON_PACKAGE/Sources/Frameworks/DataCommon.xcframework
