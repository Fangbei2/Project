#include <stdio.h>

extern void priintftest();
//extern int a;
int a = 1;


int main(int argc, char** argv)
{
	int a = 3;
	//extern a = 2;
	printf("a=%d\n", a);
	a = 2;
	printftest();
	return 0;
}

void printftest()
{
	printf("b=%d\n", a);
}
