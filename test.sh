#! /bin/bash
# This is something
for ((i = 10; i <= 20; i++)); do
	echo $i
	 ./gen $i > in;
	inFile="test-cases/in"$i.txt;
	outFile="test-cases/out"$i.txt;
	touch $inFile;
	touch $outFile;
	cp in $inFile;
	./main < $inFile > $outFile
done