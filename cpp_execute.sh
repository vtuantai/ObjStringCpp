#!/bin/bash

# Find all .cpp files in the current directory and subdirectories
cpp_files=$(find . -name "*.cpp")

# Check if any .cpp files were found
if [ -z "$cpp_files" ]; then
    echo "No .cpp files found."
    exit 1
fi

# Set the output file name
output="program"

# Compile all the found .cpp files
g++ $cpp_files -o $output

# Check compile not equal 0
if [ $? -ne 0 ]; then
    echo "Compilation failed."
    exit 1
fi

# Execute the compiled program
./$output
