#include "wordcount.h"
#include <stdio.h>
void wc_init(WC *wc, char c)
{
	wc->alpha=c;
	wc->count=0;
}
void wc_print(WC *wc)
{
	printf("%c - %d\n",wc->alpha,wc->count);
}
char wc_get_alpha(WC *wc)
{
	return wc->alpha;
}

void wc_increment(WC *wc)
{
	wc->count++;
}
void wc_process(WC *wc, char *word)
{
	char c=*word;
	if(wc->alpha==c)
		wc->count++;
}
