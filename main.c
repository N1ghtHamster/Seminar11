#include <stdio.h>
#include <unistd.h>
#include "temp_functions.h"

#define N 3

struct sensor_data
{
	unsigned int Y;
	unsigned int MM;
	unsigned int D;
	unsigned int H;
	unsigned int MI;
	int T;
	char E;
} data;

int main(int argc, char **argv)
{
	int read_arg = 0;
	while ((read_arg = getopt(argc, argv, "hf:m:")) != -1)
	{
		switch(read_arg)
		{
			case 'h': print_help();
			//case 'f': read();
			//case 'm': m();
			case '?': printf(" ");
		}
	}
	if (argc == 1)
		print_help();
	return 0;
}
