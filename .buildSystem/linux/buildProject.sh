# --------------------- #
# (C) 2020 madoodia.com #
# --------------------- #

# --= Getting Inputs =--
ROOT=$1
export TARGET_NAME=$(basename $ROOT)

# --= Include all Environment Variables =--
LINUX_DIR=$(dirname "$0")
. $LINUX_DIR/envVars.sh

# --= Building =--
cd $ROOT
if test -d build; then
    rm -rf build
fi
if test -f "$TARGET_NAME"; then
    rm -rf $TARGET_NAME
fi

mkdir build
cd build

cmake -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release -DCMAKE_PREFIX_PATH=$GTEST_LOCATION ..
cmake --build .

cp src/$TARGET_NAME ..
cd ..

./$TARGET_NAME --gtest_output="xml:./$TARGET_NAME.xml"
