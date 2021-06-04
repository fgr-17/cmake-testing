#!/bin/bash
cwd=$(pwd)

echo -e '\nBuilding target ...'
cd ${cwd}
cd src
make

echo -e '\nBuilding testing suite ...'
cd ${cwd}
mkdir -p output
cd output
cmake ../

echo -e '\nRunning tests'
cd ${cwd}
./test/ExampleTests
