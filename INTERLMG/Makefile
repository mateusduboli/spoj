CXX=g++
CPPFLAGS=-Wall
PROJECT=INTERLMG
LINK.o=${CXX}
OUTPUT=my_output.txt

${PROJECT} : ${PROJECT}.o

clean:
	rm *.o ${PROJECT}

run : ${PROJECT}
	./$< < input.txt > ${OUTPUT}.txt
	diff ${OUTPUT}.txt output.txt
