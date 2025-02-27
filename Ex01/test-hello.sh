#! /bin/bash

if ! [[ -x hello ]]; then
    echo "hello executable does not exist"
    exit 1
fi

tester/run-tests.sh $*


