#include <stdio.h>
#include <stdlib.h>
int isEven(int x){
	if (x%2==0)
		return 1;
	else
		return 0;
	return -1;
}
int isPrime(int m){
	int n,r;
	r=1;
	for(n=2 ; n<m ; n++)
	{
		if(m%n ==0)
			r=0;
	}
	return r;

}

int main(int argc, char* argv[]){
	int n;
	n=atoi(argv[1]);
	if (isEven(n)==1)
		printf("even\n");
	else
		printf("odd\n");
	if (isPrime(n)==1)
		printf("prime\n");
	else
		printf("not prime\n");
	return 0;
}
