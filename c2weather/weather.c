#include "weather.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void wt_init(WT *wt)
{
	int n;
	for(n=0;n<100;n++)
		wt->service_key[n]=0;
	wt->page_number=0;
	wt->num_rows=0;
	for(n=0;n<5;n++)
	{
		wt->data_type[n]=0;
		wt->base_time[n]=0;
	}
	for(n=0;n<9;n++)
		wt->base_date[n]=0;
	wt->nx=0;
	wt->ny=0;
}
void wt_set_service_key(WT *wt, char *key)
{
	int len;
	len=strlen(key);
	/*printf("service key length: %d\n",len);*/
	if(len<100)
		strncpy(wt->service_key,key,len);
}
void wt_set_page_number(WT *wt, int num)
{
	wt->page_number=num;
}
void wt_set_num_rows(WT *wt, int num_rows)
{
	wt->num_rows=num_rows;
}
void wt_set_data_type(WT *wt, char *dt)
{
	int len;
	len=strlen(dt);
	/*printf("data type length: %d\n",len);*/
	if(len<5)
		strncpy(wt->data_type,dt,len);
}
void wt_set_base_date(WT *wt, char *date)
{
	int len;
	len=strlen(date);
	/*printf("base date length: %d\n",len);*/
	if(len<9)
		strncpy(wt->base_date,date,len);
}
void wt_set_base_time(WT *wt, char *base_time)
{
	int len;
	len=strlen(base_time);
	/*printf("base time length: %d\n",len);*/
	if(len<5)
		strncpy(wt->base_time,base_time,len);
}
void wt_set_coordinate(WT *wt, int x, int y)
{
	wt->nx=x;
	wt->ny=y;
}
void wt_print(WT *wt)
{
	printf("Service Key: %s\nPage Number: %d\nNumber of Rows: %d\nData Type: %s\nBase Date: %s\nBase Time: %s\nnx: %d\nny: %d\n",
		wt->service_key,wt->page_number,wt->num_rows,wt->data_type,wt->base_date,wt->base_time,wt->nx,wt->ny);
}

char *wt_build_url(WT *wt)
{
	char *ret;
	int mysize,n,m;
	mysize=300;
	ret=(char*) malloc(sizeof(char)*mysize);
	m=0;
	n=sprintf(ret,"http://apis.data.go.kr/1360000/VilageFcstInfoService_2.0");
	m+=n;
	n=sprintf(ret+m,"/getUltraSrtNcst");
	m+=n;
	n=sprintf(ret+m,"?serviceKey=%s",wt->service_key);
	m+=n;
	n=sprintf(ret+m,"&pageNo=%d",wt->page_number);
	m+=n;
	n=sprintf(ret+m,"&numOfRows=%d",wt->num_rows);
	m+=n;
	n=sprintf(ret+m,"&dataType=%s",wt->data_type);
	m+=n;
	n=sprintf(ret+m,"&base_date=%s",wt->base_date);
	m+=n;
	n=sprintf(ret+m,"&base_time=%s",wt->base_time);
	m+=n;
	n=sprintf(ret+m,"&nx=%d",wt->nx);
	m+=n;
	n=sprintf(ret+m,"&ny=%d",wt->ny);
	return ret;
}
