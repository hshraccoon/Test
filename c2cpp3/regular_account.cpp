#include <iostream>
#include "regular_account.h"
using namespace std;

RegularAccount::RegularAccount()
{
	cout<<"Regular Account constructor"<<endl;
}
void RegularAccount::doRegularJob()
{
	cout<<"Regular Job: "<<job_no<<endl;
}
void RegularAccount::set_job_no(int n)
{
	job_no=n;
}
void RegularAccount::print()
{
	cout<<"Regular Account Print"<<endl;
	
	cout<<job_no<<endl;
}
