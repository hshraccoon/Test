#include "shape2d.h"
#include <iostream>
#include "triangle.h"
#include "square.h"
#include "circle.h"
#include "shape3d.h"
#include "column.h"
using namespace std;
void triangle_check()
{
	Triangle ta;
	ta.set_values(5,10);
	ta.print();
	cout<<"Area of triangle: "<<ta.area()<<endl;
}
void square_check()
{
	Square sq;
	sq.set_top_left(5,10);
	sq.set_bottom_right(10,0);
	sq.print();
	cout<<"Area of square: "<<sq.area()<<endl;
}
void circle_check()
{
	Circle c;
	c.set_diameter(20);
	c.print();
	cout<<"Area of circle: "<<c.area()<<endl;
}
void column_check()
{
	Triangle tr;
	Square s;
	Circle cr;
	Column col;

	tr.set_values(5,10);
	s.set_top_left(5,10);
	s.set_bottom_right(10,0);
	cr.set_diameter(20);

	col.set_shape((Shape2d*)&tr);
	col.set_height(10);
	col.print();
	cout<<"Volume of column: "<<col.vol()<<endl;
	cout<<"============================================="<<endl;

	col.set_shape((Shape2d*)&s);
	col.print();
	cout<<"Volume of column: "<<col.vol()<<endl;
	cout<<"============================================="<<endl;

	col.set_shape((Shape2d*)&cr);
	col.print();
	cout<<"Volume of column: "<<col.vol()<<endl;
}
int main(int argc, char *argv[])
{	
	/*triangle_check();
	cout<<"============================================="<<endl;
	square_check();	
	cout<<"============================================="<<endl;
	circle_check();
	cout<<"============================================="<<endl;
	column_check();*/

	Triangle *tr1;
	tr1=new Triangle(5,10);
	tr1->set_cmyk(65.0,0.0,61.0,68.0);
	tr1->print_cmyk();
	tr1->print_rgb();

	tr1->set_rgb(107.0,179.0,183.0);
	tr1->print_cmyk();
	tr1->print_rgb();
	delete tr1;
	return 0;
}
