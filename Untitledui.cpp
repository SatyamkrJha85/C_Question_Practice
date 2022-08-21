#include<stdio.h>
int main()
{
	int a=5;
	int b= ++a + a++ + --a;
	printf(" value of b is %d",b);
	return 0;
}
