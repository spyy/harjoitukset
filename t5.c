// t4.c sami pyy

#include <stdio.h>
#include <string.h>


static int laskeSanat(FILE *f) {	
	char str[80];
	int c=0, i=0;
		
	do{	
		i += c;	
		c = fscanf(f, "%s", str);		
	}while(c != EOF);
	
	return i;
}

static int laskeRivit(FILE *f){
	int i=0, c;
	
	do{	
		c = fgetc(f);
		if(c == '\n')
			i++;
		
	}while(c != EOF);
	
	return i;
}

int main(int argc, char **argv)
{
	FILE *f;
			
	if(argc < 3){
		printf("parametri virhe\n");
		return -1;
	}
	
	f = fopen(argv[1], "r");
	if(f == NULL){
		printf("Tiedostoa ei löydy\n");
		return -1;
	}
	
	if(!strcmp("-sanat", argv[2])){
		printf("Sanoja tiedostossa: %d\n", laskeSanat(f));
	}
	
	if(!strcmp("-rivit", argv[2])){
		printf("Rivejä tiedostossa: %d\n", laskeRivit(f));
	}
	
	fclose(f);
	
	return 0;
}

