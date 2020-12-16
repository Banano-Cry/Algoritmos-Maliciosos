#include <stdio.h>

int main(){
	int i;
	int int_array[5] = {1,2,3,4,5};
       	char char_array[5] = {'a','b','c','d','e'};

	unsigned int pointer;
	
	pointer = (unsigned int) int_array;

	for(i =0;i < 5; i++){
		printf("[Puntero de enteros] apunta a %p, el cual contiene el entero '%d'\n", pointer, *((int *) pointer));
		pointer = pointer + sizeof(int);
	}

	pointer = (unsigned int) char_array;

	for(i = 0; i < 5; i++){
		printf("[Puntero de caracteres] apunta a %p, el cual contiene el caracter '%c'\n", pointer, *((char *) pointer));
		pointer = pointer + sizeof(char);
	}

return 0;
}

