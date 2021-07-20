#include "circle.h"
#include <iostream>
#include <math.h>
using namespace std;
Circle::Circle()
{
	cout<<"Circle Constructor"<<endl;
}
Circle::Circle(const int a)
{
	cout<<"Circle Constructor"<<endl;
	set_diameter(a);
}
void Circle::set_diameter(const int a)
{
	diameter=a;
}
double Circle::area()
{
	double ret;
	ret=M_PI*(diameter/2)*(diameter/2);
	return ret;
}
void Circle::print()
{
	cout<<"Circle with diameter "<<diameter<<endl;
}
