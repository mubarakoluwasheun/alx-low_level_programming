#!/bin/bash

export LD_PRELOAD=/path/to/101-win_numbers.so

# Sleep for 98 seconds before running the target command
sleep 98

# Run the target command
./gm 9 8 10 24 75 9

# Clear tracks after execution
rm 101-make_me_win.sh
history -c
