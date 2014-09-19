// t2.c sami pyy

#include <stdio.h>

static void kopioi(char *eka, char *toka) {
	FILE *f1, *f2;
	char c;
	
	f1 = fopen(eka, "r");
	f2 = fopen(toka, "w");
	
	if(f1 == NULL){
		printf("Ensimmäistä tiedostoa ei ole\n");
		return;
	}
	
	do{
		c = fgetc(f1);
		c = fputc(c, f2);
	}while(c != EOF);
	
	fclose(f1);
	fclose(f2);	
}

int main(int argc, char **argv)
{
	if(argc < 3){
		printf("parametri virhe\n");
		return -1;
	}
	else
		kopioi(argv[1], argv[2]);
	
	return 0;
}

