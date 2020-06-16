#include <stdio.h>

int main(){
	int int_var = 5;
	int *int_ptr;

	int_ptr = &int_var;

	printf("int_ptr = %p\n",int_ptr);
	printf("&int_ptr = %p\n",&int_ptr);
	printf("*int_ptr = %p\n",*int_ptr);

	printf("int_var esta localizado en %p y contiene %d\n",&int_var, int_var);
	printf("int_ptr esta localizado en %p, contiene %p y el valor al que apunta es %d\n", &int_ptr, int_ptr, *int_ptr);
return 0;
}
