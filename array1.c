#include <stdio.h>

int main(int argc, char* argv[]){
	int x[5];
	int n;
	for(n=0; n<5; n++){
		x[n]=n*2;
	}

	for(n=0; n<5; n++){
		printf("%d - %d\n",n,x[n]);
	}
		


	return 0;
}
