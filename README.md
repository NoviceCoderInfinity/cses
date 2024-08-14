# CSES Problem Set Solutions

Welcome to my GitHub repository containing solutions for the [CSES Problem Set](https://cses.fi/problemset/).
This repository includes my solutions along with a script to verify the solutions against provided test cases.

## Compiling and Running a Solution

To compile a solution, use the following command:

```bash
#Replace file_name.cpp with the name of the file you want to compile.
g++ -o output file_name.cpp
./output <input>
```

## Verifying Your Code Locally

### C++

I have created a Bash script `verifier_c++.sh` to automatically verify your C++ code against the provided test cases locally. This script compiles your C++ file, runs it against the test cases, and compares the output to the expected results.

Using the Script:

1. Download the zip file from cses website for the specific problem.
2. Unzip the .zip file, by running the command:

```bash
unzip tests.zip -d folder_name
```

3. Run the script:

```bash
 ./verifier_c++.sh file_path folder_path
```

where `file_path` is the path to the .cpp file and `folder_path` is the path to the directory where the test cases are stored.

4. For each test case, the script will output: \
   Test X: Passed if the output matches the expected output. \
   Test X: Failed if the output does not match the expected output.
5. The script automatically removes the temporary output files after running the tests.

## Cloning the repository

```bash
git clone git@github.com:NoviceCoderInfinity/cses.git
```
