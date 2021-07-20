#include "weather.h"
#include <iostream>
#include <string.h>
#include <string>
#include <time.h>
#include <stdio.h>
using namespace std;
void Weather::init()
{
	int n;
	/*for(n=0;n<100;n++)
		service_key[n]=0;*/
	page_number=1;
	num_rows=10;
	nx=97;
	ny=75;
}
/*void Weather::set_service_key(string key)
{
	service_key=key;
	int len;
	len=strlen(key);
	if(len<100)
		strncpy(service_key,key,len);
}*/
void Weather::set_service_key(const char *key)
{
	service_key=key;
}
void Weather::set_page_number(const int num)
{
	page_number=num;
}
void Weather::set_num_rows(const int rows)
{
	num_rows=rows;
}
/*
void Weather::set_data_type(const char *dt)
{
	int len;
	len=strlen(dt);
	if(len<5)
		strncpy(data_type,dt,len);
}
*/
void Weather::set_data_type(int n)
{
	switch(n)
	{
	case XML:
		data_type="XML";
		break;
	case JSON:
		data_type="JSON";
		break;
	}
}
/*void Weather::set_base_date(const char *date)
{
	int len;
	len=strlen(date);
	if(len<9)
		strncpy(base_date,date,len);
}
void Weather::set_base_time(const char *time)
{
	int len;
	len=strlen(time);
	if(len<5)
		strncpy(base_time,time,len);
}*/
void Weather::set_base_date(const char *date)
{
	base_date=date;
}
void Weather::set_base_time(const char *time)
{
	base_time=time;
}
void Weather::set_coordinate(const int x, const int y)
{
	nx=x;
	ny=y;
}
void Weather::print()
{
	cout<<"Service Key: "<<service_key<<endl;
	cout<<"Page Number: "<<page_number<<endl;
	cout<<"Number of Rows: "<<num_rows<<endl;
	cout<<"Data Type: "<<data_type<<endl;
	cout<<"Base Date: "<<base_date<<endl;
	cout<<"Base Time: "<<base_time<<endl;
	cout<<"nx: "<<nx<<endl;
	cout<<"ny: "<<ny<<endl;
}

char *Weather::build_url()
{
	char *ret;
	
	ret=new char[300];
	snprintf(ret,300,"%s/%s?serviceKey=%s&pageNo=%d&numOfRows%d&dataType=%s&base_date=%s&base_time=%s&nx=%d&ny=%d",
		base_URL.c_str(),SrvFNName.c_str(),service_key.c_str(),page_number,num_rows,data_type.c_str(),base_date.c_str(),base_time.c_str(),nx,ny);
	
	/*n=sprintf(ret,);*/
	return ret;
}
void Weather::set_SrvFNName(int n)
{
	switch(n)
	{
	case getUltraSrtNcst:
		SrvFNName="getUltraSrtNcst";
		break;
	case getUltraSrtFcst:
		SrvFNName="getUltraSrtFcst";
		break;
	case getVilageFcst:
		SrvFNName="getVilageFcst";
		break;
	}
}
Weather::Weather()
{
	base_URL="http://apis.data.go.kr/1360000/VilageFcstInfoService_2.0";

}
Weather::~Weather()
{

}
int Weather::set_service_key_from_file(const char *filepath)
{
	char buffer[100];
	FILE *file=NULL;
	int r;
	if(filepath == NULL)
		return -1;
	file=fopen(filepath,"r");
	if(file == NULL)
		return -2;
	r=fscanf(file,"%s",buffer);
	if(r<1)
	{
		fclose(file);
		return -3;
	}
	service_key=buffer;
	fclose(file);
	return 0;
}
void Weather::set_base_date_now()
{
	char buffer[100];
	time_t t;
	struct tm *tmp;
	t=time(NULL);
	tmp=localtime(&t);
	snprintf(buffer,sizeof(buffer),"%d%02d%02d",tmp->tm_year+1900,tmp->tm_mon+1,tmp->tm_mday+1);
	base_date=buffer;
}
