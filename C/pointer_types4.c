#include <stdio.h>

int main(){
	int i;
	int int_array[5] = {1,2,3,4,5};
       	char char_array[5] = {'a','b','c','d','e'};

	void *pointer;
	
	pointer = (void *) int_array;

	for(i =0;i < 5; i++){
		printf("[Puntero de enteros] apunta a %p, el cual contiene el entero '%d'\n", pointer, *( (int *) pointer));
		pointer = (void *)((int *) pointer + 1);
	}

	pointer = (void *) char_array;

	for(i = 0; i < 5; i++){
		printf("[Puntero de caracteres] apunta a %p, el cual contiene el carecter '%c'\n", pointer, *( (char *) pointer));
		pointer = (void *)((char *)pointer + 1);
	}

return 0;
}
