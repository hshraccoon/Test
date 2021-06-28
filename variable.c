#include <stdio.h>
int main(int arg, char *argv[]){
	int n;
	const int m=100;
	n=5;
	printf("%d\n",n);

	n=10;
	printf("%d\n",n);
	printf("%d\n",m);
	
	n=n+5;
	printf("n=10 %d\n",n);
	n=n-10;
	printf("%d\n",n);
	n=n*3;
	printf("%d\n",n);
	n=n/2;
	printf("%d\n",n);
	n=n%2;
	printf("%d\n",n);

	return 0;
}
