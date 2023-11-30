#include <stdio.h>

void file_read(char *str, char *name)
{
	FILE *open;
	open = fopen(name, "r");
	if (open == NULL)
	fclose(open);
}

void print_static(int)
{
	
}



void print_help(void)
{
	printf("--------------------------------------------------------------------\n");
	printf("This program shows statistics of temperature sensor data for a year or for a specified month.\n");
	printf("To output data, you must specify the path to the data file.\n");
	printf("\n");
	printf("\tstatistic -f <filename.csv>\n");
	printf("\n");
	printf("The list of keys that this application processes and their purpose\n");
	printf("\n");
	printf("\t-h show the help page\n");
	printf("\t-f <filename.csv> input csv file for processing\n");
	printf("\t-m <number of month> if this key is set, then only statistics for the specified month are displayed.\n");
	printf("--------------------------------------------------------------------\n");
}
