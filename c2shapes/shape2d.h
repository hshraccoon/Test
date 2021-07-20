#ifndef _SHAPE2D_H_
#define _SHAPE2D_H_
#define MAX_STR 50
class Shape2d
{
	private:
	char descStr[MAX_STR];

	protected:
	int shapeId;

	public:
	Shape2d();
	Shape2d(const char *str);
	void init();
	void set_descStr(const char *str);
	virtual void print();
	virtual double area();
};
#endif
