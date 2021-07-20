#ifndef _COLOR_H_
#define _COLOR_H_

class Color
{
	private:
	int *rgb;
	int *cmyk;

	public:
	Color();
	~Color();
	void set_rgb(int r, int g, int b);
	void set_cmyk(int c, int m, int y, int k);
	void print_rgb();
	void print_cmyk();
};
#endif
