#!/bin/bash

echo --------redirect example----------
echo "(1)"
echo "a" > test
cat test
echo "(2)"
echo "b" > test
cat test
echo "(3)"
echo "c" >> test
cat test

echo ---------command sequence----------
date; who; pwd
