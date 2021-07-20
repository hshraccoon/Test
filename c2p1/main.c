#include <stdio.h>
#include <time.h>
void print_tm(struct tm *time)
{
	printf("%d s,%d min,%d h,%d day,%d mon,%d year,%d,%d,%d\n",time->tm_sec,time->tm_min,time->tm_hour,
		time->tm_mday,time->tm_mon+1,time->tm_year+1900,time->tm_wday,time->tm_yday,time->tm_isdst);
}

int main(int argc, char *argv[])
{
	time_t t;
	struct tm *time1;
	t=time(NULL);
	printf("%ld\n",t);
	time1=localtime(&t);
	print_tm(time1);
	/*printf("%d, %d, %d\n",time1->tm_year,time1->tm_mon,time1->tm_mday);*/
	
	return 0;
}
