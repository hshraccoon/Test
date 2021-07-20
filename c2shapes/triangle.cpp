#include "triangle.h"
#include <iostream>

using namespace std;
Triangle::Triangle()
{
	cout<<"Triangle Constructor"<<endl;
}
Triangle::Triangle(const int b, const int h)
{
	cout<<"Triangle Constructor"<<endl;
	set_values(b,h);
}
void Triangle::set_values(const int b, const int h)
{
	base=b;
	height=h;
}
double Triangle::area()
{
	double ret;
	ret=base*height*0.5;
	return ret;

}
void Triangle::print()
{
	cout<< "Triangle -> base:"<<base<<", height:"<<height<<endl;
}
