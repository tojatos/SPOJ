#!/bin/bash
g++ /var/www/html/SPOJ/$1.cpp -o /tmp/$1
/tmp/$1 < /var/www/html/SPOJ/input.txt 
