#include <stdio.h>
#include <stdlib.h>

int main(){
	int *num;
	//printf("%p --> %d --> %d\n",&num,num,*num);
	num = (int *) malloc(5);
	printf("%p --> %p --> %d\n",&num,num,*num);
	*num = 12345;
	printf("%p --> %p --> %d\n",&num,num,*num);
	free(num);
return 0;
}
