#!/bin/sh

set -o errexit
set -o nounset

TESTFILE="testfile"

rm -f $TESTFILE

touch $TESTFILE
attr -s key -V value $TESTFILE
attr -l $TESTFILE
attr -g key $TESTFILE

export LD_PRELOAD="$PWD/libnoxattr.so"

attr -s key -V value $TESTFILE && exit 1
attr -l $TESTFILE && exit 1
attr -g key $TESTFILE && exit 1

rm -f $TESTFILE
