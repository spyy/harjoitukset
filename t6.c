// t6.c sami pyy

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char c;
	const char *taateli = "taateli";
	const char *p;
	
	printf("Anna merkki\n");
	scanf("%c", &c);
	p = strchr(taateli, c);
	
	if(p)
		printf("Löytyi merkki: %c", *p);
	else
		printf("Merkkiä ei löytynyt");
	
	return 0;
}

