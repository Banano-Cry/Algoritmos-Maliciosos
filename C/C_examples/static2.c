#include <stdio.h>


void func(){
	static int static_int = 0;
	int num = 5;
	printf("\t[En func] static_int @ %p = %d\n",&static_int,static_int);
	printf("\t[En func] int @ %p = %d\n",&num,num);
	num ++;
	static_int++;
	
}

int main(){
	static int static_int = 20;

	for(int i = 0; i < 6; i++){
		printf("[En main] static_int @ %p = %d\n",&static_int,static_int);
		func();
	}
return 0;
}
