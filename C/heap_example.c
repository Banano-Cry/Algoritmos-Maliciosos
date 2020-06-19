#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	char *char_ptr;
	int *int_ptr;
	int mem_size;

	if(argc < 2){
		mem_size = 50;
	}
	else
		mem_size = atoi(argv[1]);
		
	printf("\t[+] Localizando %d bytes de memoria en la heap para char_ptr\n",mem_size);
	char_ptr = (char *) malloc(mem_size);

	if(char_ptr == NULL){
		fprintf(stderr, "Error: No se pudo localizar suficiente memoria.\n");
		exit(-1);
	}

	strcpy(char_ptr, "Esta es la ubicacion de memoria para la heap");
	printf("char_ptr (%p) --> '%s'\n",char_ptr,char_ptr);

	printf("\t[+] Localizando 16 bytes de memoria en la heap para int_ptr\n");
	int_ptr = (int *) malloc(16);

	if(int_ptr == NULL){
		fprintf(stderr,"Error: No se pudo localizar suficiente memoria.\n");
		exit(-1);
	}

	*int_ptr= 12345;
	printf("int_ptr (%p) -- > %d\n",int_ptr,*int_ptr);

	printf("\t[-] liberando espacio ocupado por char_ptr de la heap...\n");
	free(char_ptr);

	printf("\t[+] Localizando otros 20 bytes de memoria en la heap para char_ptr\n");
	char_ptr = (char *) malloc(20);

	if(char_ptr == NULL){
		fprintf(stderr,"Error: no se pudo localizar suficiente memoria.\n");
		exit(-1);

	}
	strcpy(char_ptr,"Nueva memoria");
	printf("char_ptr (%p) --> '%s'\n",char_ptr,char_ptr);

	printf("\t[-] liberando espacio ocupado por int_ptr de la heap...\n");
	free(int_ptr);
	printf("\t[-] liberando espacio ocupado por char_ptr de la heap...\n");
	free(char_ptr);

return 0;
}
