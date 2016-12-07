#!/bin/sh
a=$1;
b=$2;
make &&
for i in $(seq $a $b); do
	I=$(printf "%02d" $i);
	printf "================================================\n";
	make rtest$I;
	printf "************************************************\n";
	make test$I;
	printf "================================================\n";
	read line;
done;
