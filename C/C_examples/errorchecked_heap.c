#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *errorchecked_malloc(unsigned int);

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
	char_ptr = (char *) errorchecked_malloc(mem_size);

	strcpy(char_ptr, "Esta es la ubicacion de memoria para la heap");
	printf("char_ptr (%p) --> '%s'\n",char_ptr,char_ptr);

	printf("\t[+] Localizando 16 bytes de memoria en la heap para int_ptr\n");
	int_ptr = (int *) errorchecked_malloc(12);

	*int_ptr= 31337;
	printf("int_ptr (%p) -- > %d\n",int_ptr,*int_ptr);

	printf("\t[-] liberando espacio ocupado por char_ptr de la heap...\n");
	free(char_ptr);

	printf("\t[+] Localizando otros 15 bytes de memoria en la heap para char_ptr\n");
	char_ptr = (char *) errorchecked_malloc(15);

	strcpy(char_ptr,"Nueva memoria");
	printf("char_ptr (%p) --> '%s'\n",char_ptr,char_ptr);

	printf("\t[-] liberando espacio ocupado por int_ptr de la heap...\n");
	free(int_ptr);
	printf("\t[-] liberando espacio ocupado por char_ptr de la heap...\n");
	free(char_ptr);

return 0;
}

void *errorchecked_malloc(unsigned int size) {
	void *ptr;
	ptr = malloc(size);
	if(ptr == NULL) {
		fprintf(stderr, "Error: could not allocate heap memory.\n");
		exit(-1);
	}
	return ptr;
}