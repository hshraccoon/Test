#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void myquad(double a, double b, double c, double *x1, double *x2)
{
	int i;
	double d;

	d=sqrt(b*b-4*a*c);
	*x1=(-b-d)/(2*a);
	*x2=(-b+d)/(2*a);
}
void myquad2(double *abc_p,double *x1, double *x2)
{
	int i;
	double a,b,c,d;
	a=*abc_p;
	b=*(abc_p+1);
	c=*(abc_p+2);
	/*printf("a:%f b:%f c:%f",a,b,c);*/ 
	myquad(a,b,c,x1,x2);
}
int main(int argc, char *argv[])
{
	int a,b,c,i;
	double x1,x2,d;
	double test_case[][5]={
		{1.0,5.0,6.0,-3.0,-2.0},
		{1.0,9.0,18.0,-6.0,-3.0},
		{1.0,4.0,3.0,-3.0,-1.0},
		{0.0,0.0,0.0,0.0,0.0}};

	for(i=0;i<4;i++)
	{
		a=test_case[i][0];
		b=test_case[i][1];
		c=test_case[i][2];
		myquad(a,b,c,&x1,&x2);
		if(x1==test_case[i][3] && x2==test_case[i][4])
			printf("case %d -- pass\n",i+1);
		else
			printf("case %d -- fail\n",i+1);
	}
	printf("======================================================\n");
	
	for(i=0;i<4;i++)
	{
		myquad2(test_case[i],&x1,&x2);
		if(x1==test_case[i][3] && x2==test_case[i][4])
			printf("case %d -- pass\n",i+1);
		else
			printf("case %d -- fail\n",i+1);
	}

	return 0;
}
