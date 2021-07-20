#ifndef _CIRCLE_H_
#define _CIRCLE_H_
#include "shape2d.h"

class Circle: public Shape2d
{
	private:
	int diameter;

	public:
	Circle();
	Circle(const int a);
	void set_diameter(const int a);
	double area();
	void print();
};
#endif
