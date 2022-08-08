#include "main.h"
#include<stdio.h>

int main(void)
{
	char buff[30];
	char *eg = "example";

	//testing reverse
	printf("rev: [%s]\n", reverse_str(eg));

	// Testing num to str
	signed_num_to_str(1245, 16, buff);
	printf("num [%s]\n", buff);

	return (0);
}
