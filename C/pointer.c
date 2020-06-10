#include <stdio.h>
#include <string.h>

int main(){

	char str_array[25];
	char *pointer;
	char *pointer2;

	strcpy(str_array, "Algoritmos Maliciosos\n");
	pointer = str_array;
	printf(pointer);

	pointer2 = pointer + 2;
	printf(pointer2);
	strcpy(pointer2,"Texto ejemplo\n");
	printf(pointer);

return 0;
}
