#include "shape3d.h"
#include <iostream>
#include <string.h>

using namespace std;

Shape3d::Shape3d(){
	cout<<"Shape3d Constructor"<<endl;
	init();
}

Shape3d::Shape3d(const char *str){
	init();
	set_descStr(str);
}

void Shape3d::init(){
	int n;
	for(n=0; n<MAX_STR; n++)
		descStr[n]=0;
}

void Shape3d::set_descStr(const char *str){
	int len;
	len = strlen(str);
	if(len<MAX_STR)
		strncpy(descStr, str, len);
}

void Shape3d::print(){
	cout<<"Shape3d: "<<descStr<<endl;
}
