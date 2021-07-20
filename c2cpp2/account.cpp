#include <iostream>
#include "account.h"
#include <string.h>
using namespace std;
void Account::set_name(const char *n)
{
	int len;
	if(*n>='1' && *n<='9')
	{
		cout<<"Account name should be starting with alphabet"<<endl;
		return;
	}
	len=strlen(n);
	if(len<30)
		strncpy(name,n,len);
}
void Account::set_id(const int n)
{
	if(n<500 && n>0)
		id=n;
}
void Account::print()
{
	cout<<"Name is "<<name<<endl;
	cout<<"Number is "<<id<<endl;
}
Account::Account()
{
	int n;
	for(n=0;n<30;n++)
		name[n]=0;
	id=0;
	cout<<"Account Constructor"<<endl;
}
Account::Account(const char *c, const int n)
{
	Account();
	set_name(c);
	set_id(n);
}
