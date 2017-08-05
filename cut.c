#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (int argc, char*argv[]){
	int i=0;
	char *copia_arq;
	char *delimitador;
	FILE *arq;
	arq=fopen("arq.in","r");
	
	if (arq == NULL)
		{
    printf("Problemas na leitura do arquivo\n");
    	
	} 
	
	copia_arq= malloc(sizeof(arq));
	delimitador=malloc(sizeof(argv[1]));
	
	fseek(arq, 0, SEEK_SET);
	while( (fgetc(arq))!= EOF ){
		copia_arq[i]=fgetc(arq);
		i++;
	}
	
	
	if(argv[1]=="-d"){
		delimitador=argv[2];
	}
	
	if(argv[3]=="-f"){
		

	}

	

	return 0;
}