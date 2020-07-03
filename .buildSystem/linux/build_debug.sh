# --------------------- #
# (C) 2020 madoodia.com #
# --------------------- #

# -----= Getting Inputs =---- #
ROOT=$1
FOLDER=$2
export FILE_NAME=$3
export TARGET_NAME=$(basename $ROOT)
# --------------------------- #

# ------= Include Envs =----- #
LINUX_DIR=$(dirname "$0")
. $LINUX_DIR/envVars.sh
# --------------------------- #

# --------- Common ---------- #
cd $ROOT
if [ -d build ] && [ "$NEED_BUILD" = 1 ]; then
    rm -rf build
fi
if [ ! -d "build" ]; then
    mkdir build
fi

if [ -f "$TARGET_NAME" ]; then
    rm -rf $TARGET_NAME
fi

cd build

cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Debug -DCMAKE_PREFIX_PATH=$GTEST_LOCATION $ROOT/$FOLDER
cmake --build .

