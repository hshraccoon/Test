#include <iostream>
#include "account.h"	
using namespace std;

int main(int argc, char *argv[])
{
	Account my_account;
	my_account.set_name("myname");
	my_account.set_id(123);
	my_account.print();
	
	my_account.set_name("1234");
	my_account.print();
	
	Account my_account2("default",333);
	my_account2.print();
	
	Account *my_account3;
	my_account3=new Account();
	my_account3->set_name("anotherName");
	my_account3->set_id("143");
	my_account3->print();
	delete my_account3;	

	return 0;
}
