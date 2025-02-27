#! /bin/bash

if ! [[ -x pyramid ]]; then
    echo "program pyramid executable does not exist"
    exit 1
fi

tester/run-tests.sh -d tests-pyramid


