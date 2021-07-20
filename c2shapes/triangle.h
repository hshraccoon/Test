#ifndef _TRIANGLE_H_
#define _TRIANGLE_H_
#include "shape2d.h"
#include "color.h"
class Triangle: public Shape2d, public Color
{
	private:
	int base;
	int height;

	public:
	Triangle();
	Triangle(const int b, const int h);
	void set_values(const int b, const int h);
	double area();
	void print();
};
#endif
