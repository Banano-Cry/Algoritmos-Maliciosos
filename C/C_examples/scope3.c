#include <stdio.h>

int j = 5;

void func3(){
	int i = 14, j = 1024;
	printf("\t\t\t[En func3] i @ %p = %d\n",&i,i);
	printf("\t\t\t[En func3] j @ %p = %d\n",&j,j);
}

void func2(){
	int i = 32;
	printf("\t\t[En func2] i @ %p = %d\n",&i,i);
	printf("\t\t[En func2] j @ %p = %d\n",&j,j);
	printf("\t\t[En func2] cambiando j = 255\n");
	j = 255;
	func3();
	printf("\t\t[Volviendo a func2] i @ %p = %d\n",&i,i);
	printf("\t\t[Volviendo a func2] j @ %p = %d\n",&j,j);

}

void func1(){
	int i =1;
	printf("\t[En func1] i @ %p  = %d\n",&i,i);
	printf("\t[En func1] j @ %p  = %d\n",&j,j);
	func2();
	printf("\t[Volviendo a func1] i @ %p = %d\n",&i,i);
	printf("\t[Volviendo a func1] ij@ %p = %d\n",&j,j);
}

int main(){
	int i = 78;
	printf("[En main] i @ %p = %d\n",&i,i);
	printf("[En main] j @ %p = %d\n",&j,j);
	func1();
	printf("[Volviendo a main] i @ %p = %d\n",&i,i);
	printf("[Volviendo a main] j @ %p = %d\n",&j,j);
}

