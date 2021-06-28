#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int a,b,c;
	double x;
	double y;
	double d;
	
	if(argc != 4)
	{		
		printf("Need Options\n");
		return 0;
	}
	for(a=0;a<argc;a++)
	{
		printf("argv[%d]\t%s\n",a,argv[a]);
	}

	a=atoi(argv[1]);
	b=atoi(argv[2]);
	c=atoi(argv[3]);
	d=sqrt(b*b-4*a*c);

	x=(-b-d)/(2*a);
	y=(-b+d)/(2*a);
	printf("Your equation is %dx^2+%dx+%d=0 \n", a,b,c); 
	printf("x1 is %f\n",x);
	printf("x2 is %f\n",y);
	
	return 0;
}
