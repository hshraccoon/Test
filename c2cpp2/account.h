#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

class Account
{
	private:
	char name[30];
	int id;
	
	public:
	Account();
	Account(const char *c, const int n);
	void set_name(const char *n);
	void set_id(const int n);
	void print();
};
#endif
