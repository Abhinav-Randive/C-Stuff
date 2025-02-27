#! /bin/bash

if ! [[ -x square ]]; then
    echo "program square executable does not exist"
    exit 1
fi

tester/run-tests.sh -d tests-square


