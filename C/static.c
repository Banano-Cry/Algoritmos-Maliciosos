#include <stdio.h>

void func(){
	static int static_var = 0;
	int num = 5;

	printf("\t[En func] static_var = %d, num = %d\n",static_var,num);
	num ++;
	static_var++;
}

int main(){
	static int static_var = 20;

	for(int i = 0; i < 6; i ++){
		printf("[En main] static_vat = %d\n",static_var);
		func();
	}
	
	return 0;
}
