// t3.c sami pyy

#include <stdio.h>


static int laskeMerkit(char *tiedosto) {
	FILE *f;
	int c, i;
		
	f = fopen(tiedosto, "r");
		if(f == NULL){
		printf("Tiedostoa ei löydy\n");
		return 0;
	}
	
	i = -1;
	do{
		i++;
		c = fgetc(f);
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
		printf("Merkkejä tiedostossa: %d\n", laskeMerkit(argv[1]));
	
	return 0;
}

