#!/bin/bash

# Compile each .c file into object files
for file in *.c; do
    gcc -c "$file"
done

# Create the static library liball.a from the object files
ar rcs liball.a *.o

# Clean up - remove the object files
rm *.o

