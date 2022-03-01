# Mobile Common
Common domain code shared between iOS and Android apps.

## Setup Instructions

After cloning the main repo (android or iOS) run the following command

```
git submodule update --init --recursive
```

After running above code the code should start building fine but if after executing above command you still can't build the project then clone it manually then register by executing following commands

```
> git clone https://github.com/plume-design/mobile-common.git
> git submodule update --init --recursive
```

## Commit Instructions

When you make any changes to this module then commit+push those changes to this module first and then push the changes to main repo.

## iOS Integration
1. run assemble to generate the x86 and arm84 frameworks
```
> ./gradlew clean; ./gradlew assemble
```
2. bundle frameworks in an xcframework
```
> xcodebuild -create-xcframework \
-framework data-common/build/bin/iosArm64/releaseFramework/DataCommon.framework \
-framework data-common/build/bin/iosX64/releaseFramework/DataCommon.framework \
-output data-common/build/bin/DataCommon.xcframework
```
3. Copy the xcframework to your iOS project
```
> cp -rf data-common/build/bin/DataCommon.xcframework ../plume-ios/Libraries/MobileCommon/Sources/Frameworks

```
4. Import `MobileCommon`
```
import DataCommon

```

## Installation of the JDK on macOS

The easiest way to install Java JDK is with `brew`.

https://docs.brew.sh/Installation

```
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

#OpenJDK (option 1)
```
brew install openjdk@11
```

#AdoptOpenJDK (option 2)
```
brew cask install adoptopenjdk11
```
For using multiple Java versions install i.e
https://github.com/jenv/jenv

## Building xcframework on M1

1) get intel jdk
2) run terminal via rosetta
3) run this command:

```
./gradlew -Dorg.gradle.java.home=$INTEL_JDK_HOME_PATH clean assemble
``` 
