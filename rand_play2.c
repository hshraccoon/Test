#include <stdio.h>
#include <stdlib.h>
#define COUNT 150


int main(int argc, char *argv[]){
	int n,x,i,sum,avg;
	int rand_num[150];	

	x=atoi(argv[1]); 
	srand(x);
	
	for(i=1;i<COUNT;i++)
	{	
		n=rand()%100;
		rand_num[i]=n;
	}
	for(i=0;i<COUNT;i++)
	{
	/*printf("%d\t%d\n",i,rand_num[i]);*/
	if(rand_num[i]%3==0)
		{
			if(rand_num[i]>0)
				printf("%d\t%d\n",i,rand_num[i]);
		}
	}
	
	/*avg=sum/COUNT;*/
	/*printf("average is %d\n",avg);*/
	return 0;
}
