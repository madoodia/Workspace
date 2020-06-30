# --------------------- #
# (C) 2020 madoodia.com #
# --------------------- #

# -----= Getting Inputs =---- #
ROOT=$1
FOLDER=$2
export FILE_NAME=$3
export TARGET_NAME=$(basename $ROOT)
# --------------------------- #

# echo "$ROOT/build/lib$FOLDER.a"
if [ -f "$ROOT/build/lib$FOLDER.a" ]; then
    cd $ROOT/build/"$FOLDER"_tst
fi
if [ ! -f "$ROOT/build/lib$FOLDER.a" ]; then
    cd $ROOT/build/$FOLDER/"$FOLDER"_tst
fi

./"$FOLDER"_tst

# echo $ROOT
# echo $FOLDER
# echo $FILE_NAME
# echo $TARGET_NAME

# --------------------------- #
