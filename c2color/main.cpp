#include "color.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	Color *c;
	c=new Color();
	c->set_rgb(29,82,32);

	c->print_cmyk();
	c->print_rgb();
	delete c;
	return 0;
}
