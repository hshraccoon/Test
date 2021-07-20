#include <stdio.h>
#include "weather.h"
#include <stdlib.h>
#include <curl/curl.h>
size_t get_result(char *p, size_t s, size_t n, void *d)
{
	printf("%s",p);
	return s*n;
}

int main(int argc, char *agrv[])
{
	WT weather_url;
	FILE *file;
	char buffer[100];
	char *url;
	CURL *curl;
	file=fopen("/home/dg/wt_key","r");
	fscanf(file,"%s",buffer);
	fclose(file);

	wt_init(&weather_url);
	wt_print(&weather_url);
	printf("===================================================\n");
	
	wt_set_page_number(&weather_url, 1);
	wt_set_num_rows(&weather_url, 10);
	wt_set_service_key(&weather_url,buffer);
	wt_set_data_type(&weather_url,"XML");
	wt_set_base_date(&weather_url,"20210709");
	wt_set_base_time(&weather_url,"0600");
	wt_set_coordinate(&weather_url,55,127);
	wt_print(&weather_url);

	url=wt_build_url(&weather_url);
	printf("%s\n",url);

	curl=curl_easy_init();
	curl_easy_setopt(curl,CURLOPT_WRITEFUNCTION,get_result);
	curl_easy_setopt(curl,CURLOPT_URL,url);
	curl_easy_perform(curl);
	curl_easy_cleanup(curl);
	free(url);
	return 0;
}
