#include <stdio.h>

int main(){
	printf("El dato 'int' ocupa \t\t %d bytes\n",sizeof(int));
	printf("El dato 'int sin signo' ocupa \t %d bytes\n",sizeof(unsigned int));
	printf("El dato 'short int' ocupa \t %d bytes\n",sizeof(short int));
	printf("El dato 'long int' ocupa \t %d bytes\n",sizeof(long int));
	printf("El dato 'long long int' ocupa \t %d bytes\n",sizeof(long long int));
	printf("El dato 'float' ocupa \t\t %d bytes\n",sizeof(float));
	printf("El dato 'char' ocupa \t\t %d bytes\n",sizeof(char));

return 0;
}
