// t8.c sami pyy

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char c;
	char str[80];
	const char *p;
	
	printf("Anna sana:\n");
	gets(str);	
	printf("Anna merkki\n");
	c = getchar();	
	p = strchr(str, c);
	
	if(p)
		printf("Löytyi merkki: %c", *p);
	else
		printf("Merkkiä ei löytynyt");
	
	return 0;
}
