#include <stdio.h>

int main(){
	int a, b;
	float c, d;

	a = 13;
	b = 5;

	c = a/b;
	d = (float) a / (float) b; //Se deben especificar que sean flotantes para que haga la division con decimales

	printf("[enteros]\t a = %d\t b =%d\n",a,b);
	printf("[flotantes]\t c = %f\t d = %f\n",c,d);
return 0;
}
