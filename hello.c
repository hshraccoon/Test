/*my first c program*/
/*llllllllllllll */
#include <stdio.h>

int main(int argc, char *argv[]){

	int n;	/*integer*/
	/*int MyName; *camel case*/
	char c; /*character*/
	short s;
	long l;
	float f;
	double d;
	printf("int %ld\n",sizeof(n));
	printf("char %ld\n",sizeof(c));
	printf("short %ld\n",sizeof(s));
	printf("long %ld\n",sizeof(l));
	printf("float %ld\n",sizeof(f));
	printf("double %ld\n",sizeof(d));
	printf("Hello World\n");
	return 0;
}
