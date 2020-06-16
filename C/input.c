#include <stdio.h>
#include <string.h>

int main(){

	char string[25];
	int count, i;

	strcpy(string, "Algoritmos Maliciosos");
	printf("Cuantas veces repetir: ");
	scanf("%d",&count);

	for(i=0;i<count;i++){
		printf("%3d - %s\n",i,string);
	}

return 0;
}
