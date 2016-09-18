#!/bin/bash
if [ "linux-gnu" = $OSTYPE ] ; then
	TOOLSET=gcc
else
	TOOLSET=darwin
fi
./boost/b2 -sBOOST_ROOT=./boost toolset=$TOOLSET cxxflags=-std=c++14 $1

