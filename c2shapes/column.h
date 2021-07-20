#ifndef __COLUMN_H__
#define __COLUMN_H__

#include "shape3d.h"
#include "shape2d.h"

class Column: public Shape3d{
	private:
	int height;
	Shape2d *bshape;

	public:
	Column();
	Column(Shape2d *s, int h);
	void set_shape(Shape2d *s);
	void set_height(int h);
	double vol();
	void print();
};

#endif
