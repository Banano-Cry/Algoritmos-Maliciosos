#include <stdio.h>

int j = 5;

void func3(){
	int i = 14, j = 1024;
	printf("\t\t\t[En func3] i = %d, j = %d\n",i,j);
}

void func2(){
	int i = 32;
	printf("\t\t[En func2] i = %d, j = %d\n",i,j);
	printf("\t\t[En func2] cambiando j = 255\n");
	j = 255;
	func3();
	printf("\t\t[Volviendo a func2] i = %d, j = %d\n",i,j);

}

void func1(){
	int i =1;
	printf("\t[En func1] i = %d, j = %d\n",i,j);
	func2();
	printf("\t[Volviendo a func1] i = %d, j = %d\n",i,j);
}

int main(){
	int i = 78;
	printf("[En main] i = %d, j = %d\n",i,j);
	func1();
	printf("[Volviendo a main] i = %d, j = %d\n",i,j);
}
