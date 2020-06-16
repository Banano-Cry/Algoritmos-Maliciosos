#include <stdio.h>

int main(){
	char string[25];
	int A = -25;
	unsigned int B = 337;

	strcpy(string, "Algoritmos Maliciosos");
	//Diferentes formatos para imprimir
	printf("[A] Dec: %d, Hex: %x, Unsigned: %u\n",A,A,A);
	printf("[B] Dec: %d, Hex: %x, Unsigned: %u\n",B,B,B);
	printf("[espacios en B] 3: '%3u', 10: '%10u', '%08u'\n",B,B,B);

	//Rellenar con ceros
	printf("[strings] %s Address %08x\n",string,string);

	printf("variable A is at address: %08x\n",&A);
return 0;
}
