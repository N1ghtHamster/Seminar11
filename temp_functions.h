#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define SIZE 30

struct sensor {
	uint8_t D;
	uint8_t MM;
	uint16_t Y;
	uint8_t H;
	uint8_t MI;
	int8_t T;
};

void file_read(struct sensor *info, char *name);
void print_statistic(struct sensor *info, int number);
void print_help(void);
void cgangeIJ(struct sensor *info,int i,int j);
//упорядочивающую его по неубыванию температуры
void SortByT(struct sensor *info,int n);
unsigned int DateToInt(struct sensor *info);
//упорядочивающую его по дате
void SortByDate(struct sensor *info,int n);
void AddRecord(struct sensor *info, int number, uint16_t year, uint8_t month, uint8_t day, uint8_t hourse, uint8_t minute, int8_t t);
int AddInfo(struct sensor *info);


