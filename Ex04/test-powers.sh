#! /bin/bash

if ! [[ -x powers_of_two ]]; then
    echo "program triangle executable does not exist"
    exit 1
fi

tester/run-tests.sh -d tests-powers


