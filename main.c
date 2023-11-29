#include <stdio.h>

#define TOSTR(a) #a
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
	
	if (argc == 0)
	return 1;
}
