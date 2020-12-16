#include <stdio.h>

void usage(char *program_name){
printf("Uso del programa: %s <message> <# of times to repeat> \n",program_name);
exit(1);
}

int main(int arg_count, char *argv[]){
	int i, count;
	if(arg_count < 3)
		usage(argv[0]);

	count = atoi(argv[2]);
	printf("repetiendo %d veces...\n",count);
	for(i = 0; i < count; i++){
		printf("#%d - %s\n",i,argv[1]);
	}
return 0;
}
