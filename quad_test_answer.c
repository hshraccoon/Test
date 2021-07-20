#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int quad(int a, int b, int c, double *x1, double *x2)
{
	double x0;
	x0=sqrt(b*b-4*a*c);
	*x1=(-b-x0)/(2*a);
	*x2=(-b+x0)/(2*a);
	return 0;
}
int quad_test(double *vars, double *x1, double *x2)
{
	return quad(vars[0],vars[1],vars[2],x1,x2);
}
int main(int argc, char *argv[])
{
	int n,m,i,isLast;
	double x,y;
	double test_case[][5]={{1.0,5.0,6.0,-3.0,-2.0},
				{1.0,9.0,18.0,-6.0,-3.0},
				{1.0,4.0,3.0,-3.0,-1.0},
				{0.0,0.0,0.0,0.0,0.0}};
	i=0;
	isLast=1;
	while(1)
	{
		for(n=0;n<5;n++)
		{
			if(test_case[i][n] !=0.0)
			{
				isLast=0;
				break;
			}
		}
		if(isLast==1)
			break;
		quad_test(test_case[i],&x,&y);
		if(x==test_case[i][3] && y==test_case[i][4])
			printf("case %d - pass\n",i+1);
		else
			printf("case %d - fail\n",i+1);
		i++;
		isLast=1;
	}
	
	return 0;
}
