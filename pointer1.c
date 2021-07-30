#include<stdio.h>
int main()
{
	int i = 10, j = 20;
	int* p = &i;
	*p = 40;
	p = &j;
	*p = 60;

	printf("i = %d  j = %d\n", i, j);

	return 0;
}