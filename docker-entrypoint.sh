#!/bin/bash

# Check if both arguments are provided
if [ $# -lt 2 ]; then
    echo "Usage: $0 <first_arg> <second_arg>"
    exit 1
fi

# Run ./main with the first argument and redirect output to the second argument
exec ./main $1 > $2
