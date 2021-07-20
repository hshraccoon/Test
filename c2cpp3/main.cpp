#include "account.h"
#include "regular_account.h"
#include "admin_account.h"

int main(int argc, char *argv[])
{
	RegularAccount reg_account;
	reg_account.set_name("reg_Account");
	reg_account.set_id(123);
	reg_account.set_job_no(100);
	reg_account.print();
	reg_account.doRegularJob();

	AdminAccount admin;
	admin.set_name("admin");
	admin.set_id(456);
	admin.print();

	return 0;
}
