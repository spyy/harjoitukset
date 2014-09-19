// t1.c sami pyy

#include <stdio.h>

int main(int argc, char **argv)
{
	while(argc){
		argc--;
		printf(" %s", argv[argc]);		
		}
	
	printf("\n");
	
	return 0;
}

