#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]){
	int i,j,n,c;
	n=atoi(argv[1]);
	
	printf("Prime numbers are \n");
	for(i=2;i<n;i++)
	{
		c=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				c++;
			}
		}
	
		if(c==2)
		{
			printf("%d\n",i);
		}
	}

}
