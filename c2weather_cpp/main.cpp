#include <iostream>
#include "weather.h"
#include <string>
#include <curl/curl.h>

using namespace std;
string response_str;
size_t get_result(char *p, size_t s, size_t n, void *data)
{
	response_str.append(p);
	return s*n;
}
int main(int argc, char *argv[])
{
	char *weather_url;
	CURL *curl;
	response_str="";
	size_t location;
	string sub_string;
	Weather wt;
	wt.init();
	wt.set_service_key_from_file("/home/dg/wt_key");
	wt.set_data_type(XML);
	wt.set_base_date_now();
	wt.set_base_time("0600");
	wt.set_SrvFNName(getUltraSrtNcst);

	wt.print();
	weather_url=wt.build_url();
	cout<<"========================================="<<endl;
	cout<<weather_url<<endl;
	
	curl=curl_easy_init();
	curl_easy_setopt(curl,CURLOPT_WRITEFUNCTION,get_result);
	curl_easy_setopt(curl,CURLOPT_URL,weather_url);
	curl_easy_perform(curl);
	cout<<"========================================="<<endl;
	cout<<response_str.c_str()<<endl;
	cout<<"========================================="<<endl;
	location=response_str.find("T1H",0);
	sub_string=response_str.substr(location+47,10);
	cout<<"Current Temperature is "<<sub_string.c_str()<<endl;
	cout<<"========================================="<<endl;
	location=sub_string.find("<",0);
	sub_string=sub_string.substr(0,location);
	cout<<"Temperature is "<<sub_string.c_str()<<endl;
	cout<<"========================================="<<endl;
	curl_easy_cleanup(curl);

	delete weather_url;

	return 0;
}
