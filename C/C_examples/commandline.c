#include <stdio.h>

int main(int arg_count, char *arg_list[]){
	int i;
	printf("Hay una cantidad de %d argumentos.\n",arg_count);
	for(i = 0; i < arg_count; i++){
		printf("argumento #%d: %s\n",i,arg_list[i]);
	}
return 0;
}
