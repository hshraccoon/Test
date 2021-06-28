#include <stdio.h>

int main(int argc, char* argv[]){
	int x[5];
	int n;
	
	for(n=0; n<argc+1; n++)
		printf("argv[%d] - %s\n", n, argv[n]);
		


	return 0;
}
