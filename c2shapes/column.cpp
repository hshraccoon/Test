#include "column.h"
#include "shape2d.h"
#include <iostream>
using namespace std;

Column::Column(){
	cout<<"Column Constructor"<<endl;
}

Column::Column(Shape2d *s, int h){
		
}

void Column::set_shape(Shape2d *s){
	bshape = s;
}

void Column::set_height(int h){
	height = h;
}

double Column::vol(){
	double ret;
	double n;
	n=bshape->area();
	ret = n*height; 
	return ret;
}

void Column::print(){
	cout<<"Column -> height: "<<height<<endl;
	cout<<"Column base shape: "<<endl;
	bshape->print();
}
