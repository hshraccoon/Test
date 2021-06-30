#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define COUNT 150

int main(int argc, char *argv[])
{
	int x,n,i,k,rand_num[150],num[10]={0,0,0,0,0,0,0,0,0,0};
	if(argc==1)
	{
		printf("Usage: score random_seed");
		return 0;
	}
	if(isalpha(*argv[1]) != 0)
	{
		printf("Random_seed should be a number");
		return 0;
	}
	x=atoi(argv[1]);
	srand(x);
	for(i=0;i<COUNT;i++)
	{
		n=rand()%100;
		rand_num[i]=n;
		printf("%d\t",n);
	}
	printf("\n================================\n");
	
	for(i=0;i<COUNT;i++)
	{
		for(k=0;k<=9;k++)
		{
			if((10*k)<=rand_num[i] && rand_num[i]<=(10*k+9))
				num[k]=num[k]+1;
		}
	}
	
	for(k=0;k<=9;k++)
		printf("[%d ~ %d]\t%d\n",10*k,10*k+9,num[k]);
	return 0;
}

