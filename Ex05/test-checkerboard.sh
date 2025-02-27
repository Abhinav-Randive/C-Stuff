#! /bin/bash

if ! [[ -x checkerboard ]]; then
    echo "program checkerboard executable does not exist"
    exit 1
fi

tester/run-tests.sh -d tests-checkerboard


