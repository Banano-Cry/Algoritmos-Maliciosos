#include <stdio.h>

int global_var;
int global_inicializada_var = 10;

void func(){
	int stack_var;
	printf("\t[stack func] stack var @ %p\n",&stack_var);
}

int main(){
	int stack_var;
	static int static_inicializada_var = 25;
	static int static_var;
	int *heap_var;

	heap_var = (void *) malloc(4);

	//Variables en la seccion data
	printf("[Data] global_inicializada_var @ %p\n",&global_inicializada_var);
	printf("[Data] static_inicializada_var @ %p\n",&static_inicializada_var);

	//Variables en la seccion bss
	printf("[bss] global_var @ %p\n",&global_var);
	printf("[bss] static_var @ %p\n",&static_var);

	//Variable en el heap
	printf("[heap] heap_var @ %p\n",heap_var);

	//Variables en el stack
	printf("[stack main] stack_var @ %p\n",&stack_var);
	func();
return 0;
}
