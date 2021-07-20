#include <iostream>
#include <stdio.h>

using namespace std;

void my_print(int n)
{
	cout<<"The number is "<<n<<endl;

}
void my_print(double n)
{
	cout<<"The number is "<<n<<endl;
}
void my_name(const char *c)
{
	cout<<"My name is "<<c<<endl;
}
void my_name(const char *c, int n)
{
	cout<<"My name is "<<c<<" number "<<n<<endl;
}
void my_number(int n=50)
{
	cout<<"My number "<<n<<endl;
}
void print_me()
{
	cout<<"abc 123"<<endl;
}
void print_me(const char *c)
{
	cout<<" "<<c<<endl;
}
void print_me(const char *c, const int n)
{
	cout<<" "<<c<<" "<<n<<endl;

}	
void print_me(const char *c, const double n)
{
	cout<<" "<<c<<" "<<n<<endl;
}
int main(int argc, char *argv[])
{
	cout<<"Hello World"<<endl;
	printf("Hello World\n");
	my_print(100);
	my_print(3.14);
	my_name("Hyun");
	my_name("Hyun",1111);
	my_number();
	my_number(100);
	
	print_me();
	print_me("Hyun");
	print_me("Hyun",456);
	print_me("Hyun",3.14);
	return 0;
}
