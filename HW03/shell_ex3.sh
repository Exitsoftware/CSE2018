#!/bin/bash

test =/

echo -1----------------
ls /
echo -2----------------
ls $test
echo -3----------------
ls '$test'
echo -4----------------
ls "$test"
echo -5----------------
echo ls $test
echo -6----------------
exec ls /
