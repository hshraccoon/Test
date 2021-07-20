typedef struct _weather
{
	char service_key[100];
	int page_number;
	int num_rows;
	char data_type[5];
	char base_date[9];
	char base_time[5];
	int nx;
	int ny;
}WT;

void wt_init(WT *wt);
void wt_set_service_key(WT *wt, char *key);
void wt_set_page_number(WT *wt, int num);
void wt_set_num_rows(WT *wt, int num_rows);
void wt_set_data_type(WT *wt, char *dt);
void wt_set_base_date(WT *wt, char *date);
void wt_set_base_time(WT *wt, char *base_time);
void wt_set_coordinate(WT *wt, int x, int y);
void wt_print(WT *wt);
char *wt_build_url(WT *wt);
