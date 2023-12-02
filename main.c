#include <stdio.h>
#include <unistd.h>
#include "temp_functions.h"
#include <stdlib.h>

#define SIZE 30

int main(int argc, char *argv[])
{
	struct sensor info[SIZE];
	parse_cmdline(argc, argv);
	int number=AddInfo(info);
	print_statistic(info,number);
	printf("\nSort by t\n");
	SortByT(info,number); 
	print_statistic(info,number);
	printf("\nSort by date\n");
	SortByDate(info,number);
	print_statistic(info,number);
	return 0;
}
