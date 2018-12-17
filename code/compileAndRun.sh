#!/bin/sh

blast_header="../../tool/blast/blast/test/headers/";
file=$1
compiled_file="$file.i"
gcc -E -I $blast_header $file > $compiled_file
pblast.opt $compiled_file
