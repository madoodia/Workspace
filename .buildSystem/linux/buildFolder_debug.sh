# --------------------- #
# (C) 2020 madoodia.com #
# --------------------- #

# --= Getting Inputs =--
ROOT=$1
export BASE_NAME=$(basename $ROOT)
FOLDER=$2
export TARGET_NAME=$(basename $FOLDER)

# --= Include all Environment Variables =--
LINUX_DIR=$(dirname "$0")
. $LINUX_DIR/envVars.sh

# --= Building =--
cd $FOLDER
if test -f "build"; then
    rm -rf build
fi
if test -f "$TARGET_NAME"; then
    rm -rf $TARGET_NAME
fi

mkdir build
cd build

cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Debug -DCMAKE_PREFIX_PATH=$GTEST_LOCATION ..
cmake --build .

cp $TARGET_NAME $ROOT

cd $ROOT
mv $TARGET_NAME $BASE_NAME

