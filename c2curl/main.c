#include <stdio.h>
#include <curl/curl.h>
size_t get_result(char *p, size_t s, size_t n, void *data)
{
	printf("%s",p);
	return s*n;
}

int main(int argc, char *argv[])
{
	CURL *curl=NULL;
	curl=curl_easy_init();
	curl_easy_setopt(curl,CURLOPT_WRITEFUNCTION,get_result);
	curl_easy_setopt(curl,CURLOPT_URL, "http://www.google.com");
	curl_easy_perform(curl);
	curl_easy_cleanup(curl);

	return 0;
}
