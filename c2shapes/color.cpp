#include "color.h"
#include <iostream>
using namespace std;
Color::Color()
{
	int i;
	cout<<"Color Constructor"<<endl;
	rgb=new double[3];
	cmyk=new double[4];
	/*for(i=0;i<3;i++)
		*(rgb+i)=0;
	for(i=0;i<4;i++)
		*(cmyk+i)=0;*/
}
Color::~Color()
{
	cout<<"Color Destructor"<<endl;
	delete rgb;
	delete cmyk;
}
void Color::set_rgb(double r, double g, double b)
{
	double *rgb_t;
	int i,max;
	*rgb=r;
	*(rgb+1)=g;
	*(rgb+2)=b;
	*rgb_t=r/255;
	*(rgb_t+1)=g/255;
	*(rgb_t+2)=b/255;
	max=0;
	for(i=0;i<3;i++)
	{
		if(max<*(rgb_t+i))
			max=*(rgb_t+i);		
	}
	*(cmyk+3)=1-max;
	double k=*(cmyk+3);
	cout<<k<<endl;
	*cmyk=(1-*rgb_t-k)/(1-k);
	*(cmyk+1)=(1-*(rgb_t+1)-k)/(1-k);
	*(cmyk+2)=(1-*(rgb_t+2)-k)/(1-k);
}
void Color::set_cmyk(double c, double m, double y, double k)
{
	*cmyk=c;
	*(cmyk+1)=m;
	*(cmyk+2)=y;
	*(cmyk+3)=k;
	*rgb=255*(1-c)*(1-k);
	*(rgb+1)=255*(1-m)*(1-k);
	*(rgb+2)=255*(1-y)*(1-k);
}
void Color::print_rgb()
{
	int i;
	cout<<"Print RGB: ";
	for(i=0;i<3;i++)
		cout<<*(rgb+i)<<" ";
	cout<<endl<<"==================================================="<<endl;

	/*for(i=0;i<3;i++)
		cout<<"%x"<<*(rgb+i)<<endl;
	cout<<"==================================================="<<endl;*/
} 

void Color::print_cmyk()
{
	int i;
	cout<<"Print CMYK: ";
	for(i=0;i<4;i++)
		cout<<*(cmyk+i)<<" ";

	cout<<endl<<"==================================================="<<endl;
}
