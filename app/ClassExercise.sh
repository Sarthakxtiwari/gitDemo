#!/bin/bash

# Check if both arguments are provided
if [ "$#" -ne 2 ]; then
    echo "Usage: $0 <student_name> <branch_name.txt>"
    exit 1
fi

student_name="$1"
branch_file="$2"

# Function to create a folder and a file
create_student_folder() {
    if [ -d "$student_name" ]; then
        echo "Folder '$student_name' already exists."
    else
        mkdir "$student_name"
        echo "Created folder: $student_name"
    fi

    if [ -e "$student_name/$branch_file" ]; then
        echo "File '$branch_file' already exists in '$student_name'."
    else
        touch "$student_name/$branch_file"
        echo "Created file: $student_name/$branch_file"
    fi
}

create_student_folder