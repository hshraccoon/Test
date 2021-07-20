#ifndef _SQUARE_H_
#define _SQUARE_H_
#include "shape2d.h"
class Square: public Shape2d
{
	private:
	int tx,ty,bx,by;
	
	public:
	Square();
	Square(const int a, const int b, const int c, const int d);
	void set_top_left(const int a, const int b);
	void set_bottom_right(const int c, const int d);
	double area();
	void print();
};
#endif
