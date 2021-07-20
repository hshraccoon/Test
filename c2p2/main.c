#include <stdio.h>
#include "wordcount.h"
int main(int argc, char *argv[])
{
	FILE *dict;
	int i;
	char c,buffer[50];
	WC mycount[26];
	for(i=0;i<26;i++)
		wc_init(mycount+i,i+'a');
	/*for(i=0;i<26;i++)
		wc_print(mycount+i);*/
	dict=fopen("/usr/share/dict/american-english","r");
	while(feof(dict)==0)
	{
		fscanf(dict,"%s",buffer);
		for(i=0;i<26;i++)
		{
			c=wc_get_alpha(mycount+i);
			if(c==*buffer)
			{
				wc_increment(mycount+i);
				break;
			}
		}
	}
	fclose(dict);
	for(i=0;i<26;i++)
		wc_print(mycount+i);
	return 0;
}
