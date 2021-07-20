#include "square.h"
#include <iostream>

using namespace std;
Square::Square()
{
	cout<<"Square Constructor"<<endl;
}
Square::Square(const int a, const int b, const int c, const int d)
{
	cout<<"Square Constructor"<<endl;
	set_top_left(a,b);
	set_bottom_right(c,d);
}
void Square::set_top_left(const int a, const int b)
{
	tx=a;
	ty=b;
}
void Square::set_bottom_right(const int c, const int d)
{
	bx=c;
	by=d;
}
double Square::area()
{
	double ret;
	ret=(bx-tx)*(ty-by);
	return ret;
}
void Square::print()
{
	cout<< "Square -> ("<<tx<<","<<ty<<"),("<<bx<<","<<by<<")"<<endl;
}
