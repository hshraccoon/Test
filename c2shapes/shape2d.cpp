#include "shape2d.h"
#include <iostream>
#include <string.h>

using namespace std;

void _init_array(char *array, const int size)
{
	int i;
	for(i=0;i<size;i++)
		*(array+i)=0;
}

Shape2d::Shape2d()
{
	cout<<"Shape2d Constructor"<<endl;
	init();
}
Shape2d::Shape2d(const char *str)
{
	cout<<"Shape2d Constructor: "<<str<<endl;
	_init_array(descStr,MAX_STR);
}
void Shape2d::init()
{
	int i;
	for(i=0;i<MAX_STR;i++)
		descStr[i]=0;
	
}
void Shape2d::set_descStr(const char *str)
{
	int len;
	len=strlen(str);
	if (len<MAX_STR)
		strncpy(descStr,str,len);
}
void Shape2d::print()
{
	cout<<"Shape2d: "<<descStr<<endl;

}
double Shape2d::area()
{
	return 1;
}
