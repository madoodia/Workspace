#!/usr/bin/env bash

# madoodia@gmail.com
# (C) 2020
# ..................

export ARG1=$1
export ARG2=$2

# echo $CPP_FILE_DIR
# echo $FILE_NAME

BASEDIR=$(dirname "$0")
# TARGETDIR=$(dirname $CPP_FILE_DIR)
# BASENAME=$(basename $CPP_FILE_DIR)
export TARGET_NAME=$(basename $BASEDIR)


export SDKS_LOCATION=/mnt/hdd/madoodia/sdks
export GTEST_LOCATION=$SDKS_LOCATION/googletest
# export MADAPI_LOCATION=/mnt/hdd/madoodia/dev/madAPI
# export PATH=$SDKS_LOCATION/Qt5/bin:$PATH

rm -rf build
rm -rf $TARGET_NAME.xml
mkdir build
cd build

cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Debug -DCMAKE_PREFIX_PATH=$GTEST_LOCATION ..
cmake --build .

cp src/$TARGET_NAME ..
cd ..

# ./$TARGET_NAME $ARG1 $ARG2