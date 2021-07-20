#ifndef _WEATHER_H_
#define _WEATHER_H_
#include <string>
using namespace std;

enum{
	XML,
	JSON
};
enum{
	getUltraSrtNcst,
	getUltraSrtFcst,
	getVilageFcst
};
class Weather
{
	private:
	/*char service_key[100];*/
	string base_URL;
	string SrvFNName;
	string service_key;
	string data_type;
	int page_number;
	int num_rows;
	string base_date;
	string base_time;
	/*char data_type[5];
	/*char base_date[9];
	char base_time[5];*/
	int nx;
	int ny;

	public:
	Weather();
	~Weather();
	void init();
	void set_service_key(const char *key);
	void set_page_number(const int num);
	void set_num_rows(const int rows);
	void set_data_type(int n);
	void set_base_date(const char *date);
	void set_base_time(const char *time);
	void set_coordinate(const int x, const int y);
	void print();
	void set_SrvFNName(int n);
	int set_service_key_from_file(const char *filepath);
	void set_base_date_now();
	char *build_url();
};
#endif
