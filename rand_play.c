#include <stdio.h>
#include <stdlib.h>
#define COUNT 100


int main(int argc, char *argv[]){
	int n,x,i,sum,avg;
		

	x=atoi(argv[1]); 
	srand(x);
	for(i=1;i<COUNT;i++)
	{	
		n=rand()%100;
		printf("%d ",n);
		sum=sum+n;
		
	}
	printf("\n");
	avg=sum/COUNT;
	printf("average is %d\n",avg);
	return 0;
}
