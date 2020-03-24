#!/usr/bin/env bash

# madoodia@gmail.com
# (C) 2020
# ..................

export CPP_FILE_DIR=$1
export FILE_NAME=$2

# echo $CPP_FILE_DIR
# echo $FILE_NAME

BASEDIR=$(dirname "$0")
TARGETDIR=$(dirname $CPP_FILE_DIR)
BASENAME=$(basename $CPP_FILE_DIR)
export FOLDER_NAME=$(basename $BASEDIR)


export SDKS_LOCATION=/mnt/hdd/madoodia/sdks
export GTEST_LOCATION=$SDKS_LOCATION/googletest
# export MADAPI_LOCATION=/mnt/hdd/madoodia/dev/madAPI
# export PATH=$SDKS_LOCATION/Qt5/bin:$PATH

cd $CPP_FILE_DIR

rm -rf build
mkdir build
cd build

cmake -G "Unix Makefiles" -DCMAKE_PREFIX_PATH=$GTEST_LOCATION ..
make

cp $FILE_NAME ../
cd ..
rm -rf build

./$FILE_NAME --gtest_output="xml:./$FILE_NAME.xml"