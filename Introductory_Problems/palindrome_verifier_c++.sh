#NOT WORKING 
#===========================================================================================
#===========================================================================================
#==========================================================================================

#!/bin/bash

#Usage: ./palindrome_verifier_c++.sh Palindrome_Reorder.cpp folder_path
palindrome_reorder=$1
test_folder=$2

g++ -o palindrome_reorder_exec "$palindrome_reorder"
if [ $? -ne 0 ]; then
	echo "Compilation Falied"
	exit 1
fi

echo "Compiled Palindrome_Reorder.cpp file"

cat <<EOF >check_palindrome.cpp
#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string s) {
	int i = 0, j = s.size() - 1;
	while(i < j) {
		if (s[i] != s[j]) {return false;}
	}
	return true;
}

int main() {
	string inp_str; cin >> inp_str;
	if (is_palindrome(inp_str)) {cout << "YES\n";}
	else {cout << "NO\n";}
	return 0;
}
EOF

echo "Made a check_palindrome.cpp file for temporary use case"

g++ -o palindrome_checker_exec check_palindrome.cpp
echo "Compiled the check_palindrome.cpp file"
test_counter=1

for input_file in "$test_folder"/*.in; do
	echo "Running test case $test_counter"
	./palindrome_reorder_exec <"$input_file" >output_file.txt
	echo "Compiled output_file.txt for test case $test_counter"
	result=$(./palindrome_checker_exec < output_file.txt)
	echo "Ran palindrome_checker_exec against output_file"

	echo "$result"
#	if [ "$result" == "YES" ]; then
#		echo "Test $test_counter: Passed"
#	else
#		echo "Test $test_counter: Failed"
#	fi

	((test_counter++))
done

rm palindrome_reorder_exec
rm palindrome_checker_exec
rm check_palindrome.cpp

