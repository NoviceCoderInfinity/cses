#!/bin/bash

#This is a script I wrote, to automatically check, against the input test cases and the desired outputs
#To run this, intput file path along with the script. Store the input output files of cses in test folder

#./verifier.sh file_path folder_path
#file_path is the .cpp file, that you want to compile and run the tests against with
#and folder_path is the path to the directory where test_cases are kept

file_path=$1
folder_path=$2

g++ -o output $file_path

if [ $? -ne 0 ]; then
    echo "Compilation failed"
    exit 1
fi

max_tests=$(ls "$folder_path"/*.in | wc -l)

for i in $(seq 1 "$max_tests"); do
    ./output <"$folder_path/$i.in" >output_file.txt
    if diff output_file.txt "$folder_path/$i.out" >/dev/null ; then
        echo "Test $i: Passed"
    else
        echo "Test $i: Failed"
#	echo "Input given:"
#	cat "$folder_path/$i.in"
#	echo "Expected output:"
#	cat "$folder_path/$i.out"
#	echo "Actual output:"
#	cat output_file.txt
    fi
done

rm output
rm output_file.txt
