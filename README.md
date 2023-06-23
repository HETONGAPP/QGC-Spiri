# Spiri Ground Control Station

[![Releases](https://img.shields.io/github/release/mavlink/QGroundControl.svg)](https://git.spirirobotics.com/hetongapp/SpiriGroundControl/releases)
[![Travis Build Status](https://travis-ci.org/mavlink/qgroundcontrol.svg?branch=master)](https://travis-ci.org/mavlink/qgroundcontrol)
[![Appveyor Build Status](https://ci.appveyor.com/api/projects/status/crxcm4qayejuvh6c/branch/master?svg=true)](https://ci.appveyor.com/project/mavlink/qgroundcontrol)



*Spiri GroundControl* (SGC) is an intuitive and powerful ground control station (GCS) for UAVs.

The primary goal of SGC is ease of use for both first time and professional users.
It provides full flight control and mission planning for any MAVLink enabled drone, and vehicle setup for both PX4 and ArduPilot powered UAVs. Instructions for *using Spiri GroundControl* are provided in the [User Manual](https://docs.qgroundcontrol.com/en/) (you may not need them because the UI is very intuitive!)

All the code is open-source, so you can contribute and evolve it as you want.
The [Developer Guide](https://dev.qgroundcontrol.com/en/) explains how to [build](https://dev.qgroundcontrol.com/en/getting_started/) and extend QGC.


Key Links:
* [Website](http://qgroundcontrol.com) (qgroundcontrol.com)
* [User Manual](https://docs.qgroundcontrol.com/en/)
* [Developer Guide](https://dev.qgroundcontrol.com/en/)
* [Discussion/Support](https://docs.qgroundcontrol.com/en/Support/Support.html)
* [Contributing](https://dev.qgroundcontrol.com/en/contribute/)
* [License](https://github.com/mavlink/qgroundcontrol/blob/master/COPYING.md)


# Setup Installation (Windows)

*Install QT 5.15.0
* Here is the link and Download: [Website](https://download.qt.io/official_releases/online_installers/) (Windows)
* Setup the environment for QT! 
    * 1. right click the desktop and click the attribution.
    * 2. select the "Advanced System Settings"
    * 3. select the "Environment Variables"
    * 4. create a new qt system variable(using your own QT install Path) (eg. D:\QT5.15\5.15.0\msvc2019_64)

*Install Spiri QGC
* create a folder in your workspace and name it such as "Spiri"
* git clone https://git.spirirobotics.com/hetongapp/SpiriGroundControl.git
* Then cd to the "Spiri/SpiriGroundControl" and update the repo: "git submodule update --init --recursive".
* Open the "qgroundcontrol.pro" in "Spiri/SpiriGroundControl" folder by using the QT creator
* click "build" and "run"


# Setup Installation (MacOS)

* Install the Xcode in Apple Store
* Install Qt Creator for macOS: [Website](https://info.qt.io/zh-cn/download-qt-for-application-development)
* Create or open a Qt project and check the "iphonesimulator-clang-..." environment in the project configuration page
* create a folder in your workspace and name it such as "Spiri"
* git clone https://git.spirirobotics.com/hetongapp/SpiriGroundControl.git
* Then cd to the "Spiri/SpiriGroundControl" and update the repo: "git submodule update --init --recursive".
* Click the hammer compile button in the lower left corner, after the compilation is successful, you can close Qt Creator.
* After the compilation is complete, there will be an "Info.plist" file in the output folder, open it with Xcode.


# Setup Installation (Ubuntu20.04)

*Install QT 5.15.0
* Setup the environment for QT!
    * 1. wget https://download.qt.io/official_releases/online_installers/qt-unified-linux-x64-online.run
    * 2. sudo chmod a+x qt-unified-linux-x64-online.run
    * 3. ./qt-unified-linux-x64-online.run
    * 4. sudo apt-get install libxcb-xinerama0
    * 5. sudo apt-get install libgl1-mesa-dev
    * 6. sudo apt-get install aptitude
    * 7. sudo apt-get install build-essential
    * 8. sudo apt-get install libsdl2-dev
    * 9. sudo apt-get install -y patchelf
    
*Install Spiri QGC
* create a folder in your workspace and name it such as "Spiri"
* git clone https://git.spirirobotics.com/hetongapp/SpiriGroundControl.git
* Then cd to the "Spiri/SpiriGroundControl" and update the repo: "git submodule update --init --recursive".
* Open the "qgroundcontrol.pro" in "Spiri/SpiriGroundControl" folder by using the QT creator
* click "build" and "run"

    
    
    
