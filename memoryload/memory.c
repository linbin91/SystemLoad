#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[])
{
    char* p = NULL;
    int m = 0;
    unsigned long size = 0;

	if (argc < 2) {
		printf("size is needed.\n");
		return 1;
	}
	m = atoi(argv[1]);

	size = 1024 * 1024 * m;
	p = malloc(size);
	if (!p) {
		printf("malloc failed.\n");
		return 1;
	}
	printf("initilizing memory ...\n");
	memset(p, 'x', size);
	printf("memory initiliz done\n");
	sleep(1000*60*60*24*10);
}