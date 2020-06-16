#include <stdio.h>

void usage(char *program_name){
	printf("Uso de la aplicacion: %s <message> <$od time to repeat>\n",program_name);
	exit(1);
}

int main(int argc, char *argv[]){
	int i, count;
	//if(argc < 3);
	//	usage(arg[0]);
	
	count = atoi(argv[2]);
	printf("Se repetira %d veces...\n",count);

	for(i = 0; i < count; i++){
		printf("%3d - %s\n",i,argv[1]);
	}
}
