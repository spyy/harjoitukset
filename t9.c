// t9.c sami pyy

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char c;
	char str[80];
	const char *p;
	int i=0;
	
	printf("Anna sana:\n");
	gets(str);	
	printf("Anna merkki\n");
	c = getchar();	
	
	p = strchr(str, c);
	while(p){
		i++;
		p = strchr(p+1, c);
	}
	
	printf("Merkki löytyi %d kertaa", i);
	
	return 0;
}
