#! /bin/bash

if ! [[ -x non_negative_integers ]]; then
    echo "program rectangle executable does not exist"
    exit 1
fi

tester/run-tests.sh -d tests-integers


