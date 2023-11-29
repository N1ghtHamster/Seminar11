all: statistic

statistic: main.o temp_functions.o
	gcc main.o temp_functions.o -o statistic.exe
	
main.o:
	gcc -c main.c
	
temp_functions.o:
	gcc -c temp_functions.c
	
rm:
	del *.o statistic.exe
