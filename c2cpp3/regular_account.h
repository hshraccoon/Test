#ifndef _REGULAR_ACCOUNT_H_
#define _REGULAR_ACCOUNT_H_
#include "account.h"
class RegularAccount : public Account
{
	private:
	int job_no;
	public:
	RegularAccount();
	
	void doRegularJob();
	void set_job_no(int n);

	void print();
};

#endif
