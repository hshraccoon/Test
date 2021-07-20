#ifndef _COLOR_H_
#define _COLOR_H_

class Color
{
	private:
	double *rgb;
	double *cmyk;

	public:
	Color();
	~Color();
	void set_rgb(double r, double g, double b);
	void set_cmyk(double c, double m, double y, double k);
	void print_rgb();
	void print_cmyk();
};
#endif
