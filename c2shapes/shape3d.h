#ifndef _SHAPE3D_H_
#define _SHAPE3D_H_

#define MAX_STR	50

class Shape3d{
	private:
	char descStr[MAX_STR];

	protected:
	int shapeId;

	public:
	Shape3d();
	Shape3d(const char *str);
	void init();
	void set_descStr(const char *str);
	void print();
};

#endif
