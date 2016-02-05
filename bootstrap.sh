#!/bin/bash
if [ ! -d boost ]; then
	git clone https://github.com/boostorg/boost.git boost
	if [ 0 != $? ]; then
		exit $?
	fi
fi

pushd boost

while true; do
	git submodule update --init
	if [ 0 == $? ]; then
		break
	fi
	echo 'retry...'
done

./bootstrap.sh
if [ 0 != $? ]; then
	exit $?
fi

./b2 -q
if [ 0 != $? ]; then
	exit $?
fi

./b2 install --prefix=./
if [ 0 != $? ]; then
	exit $?
fi
	
popd

echo 'SUCCEEDED'

