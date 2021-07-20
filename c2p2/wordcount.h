#ifndef _WORDCOUNT_H_
#define _WORDCOUNT_H_
typedef struct _wordcount
{
	char alpha;
	unsigned int count;
}WC;
void wc_init(WC *wc, char c);
void wc_print(WC *wc);
char wc_get_alpha(WC *wc);
void wc_increment(WC *wc);
void wc_process(WC *wc, char *word);
#endif
