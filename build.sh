#!/bin/bash
echo "compiling test_analog program.."
g++ test_analog.cpp AnalogIn.cpp -o test_analog
echo "compilation complete.."
echo "run ./test_analog"