#!/bin/bash

CURR_DIR=$pwd
SCRIPTS_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" >/dev/null 2>&1 && pwd )"
REPO_ROOT_DIR="$SCRIPTS_DIR/.."

BUILD_ARCHITECTURES=""
GRADLE_ARGS="--no-daemon"

if [[ "$1" == -D* ]];
then
    GRADLE_ARGS="$GRADLE_ARGS $1"
    shift
fi

BUILD_ARCHITECTURES="$BUILD_ARCHITECTURES linkDebugFrameworkIosX64"

cd "$REPO_ROOT_DIR/mobile-common"

./gradlew $GRADLE_ARGS clean
./gradlew $GRADLE_ARGS $BUILD_ARCHITECTURES

echo "Moving CommonData.framework into Libraries"
cp -r common-data/build/bin/iosX64/debugFramework/ ../Libraries
echo "Moving CommonDomain.framework into Libraries"
cp -r common-domain/build/bin/iosX64/debugFramework/ ../Libraries
echo "Moving success..."
cd $CURR_DIR
