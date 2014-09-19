// t4.c sami pyy

#include <stdio.h>


static int laskeSanat(char *tiedosto) {
	FILE *f;
	int c, i;
	char str[80];
		
	f = fopen(tiedosto, "r");
		if(f == NULL){
		printf("Tiedostoa ei löydy\n");
		return 0;
	}
	
	i = 0;
	c = 0;
	do{	
		i += c;	
		c = fscanf(f, "%s", str);		
	}while(c != EOF);
	
	fclose(f);
	
	return i;
}

int main(int argc, char **argv)
{
	if(argc < 2){
		printf("parametri virhe\n");
		return -1;
	}
	else
		printf("Sanoja tiedostossa: %d\n", laskeSanat(argv[1]));
	
	return 0;
}

