#!/bin/bash
SPOJ_PATH="/home/tojatos/Scripts/SPOJ/"
SAVE_PATH="/tmp/SPOJ/"
g++ $SPOJ_PATH$1 -o $SAVE_PATH$1
$SAVE_PATH$1 < "$SPOJ_PATH"input.txt 
