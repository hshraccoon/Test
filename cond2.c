#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){

	int n;

	n=atoi(argv[1]);

	switch(n)
	{
	case 1:
		printf("one\n");
		break;
	case 2:
		printf("two\n");
		break;
	default:
		printf("don't know\n");
		break;
	}
	return 0;
}
