#include <stdio.h>

void func3(){
	int i = 14;
	printf("\t\t\t[En func3] i = %d\n",i);
}

void func2(){
	int i = 32;
	printf("\t\t[En func2] i = %d\n",i);
	func3();
	printf("\t\t[Volviendo a func2] i = %d\n",i);

}

void func1(){
	int i =1;
	printf("\t[En func1] i = %d\n",i);
	func2();
	printf("\t[Volviendo a func1] i = %d\n",i);
}

int main(){
	int i = 78;
	printf("[En main] i = %d\n",i);
	func1();
	printf("[Volviendo a main] i = %d\n",i);

}
