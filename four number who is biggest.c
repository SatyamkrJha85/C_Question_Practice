#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf(" enter a four number you want to show output");
	scanf(" %d %d %d %d", &a,&b,&c,&d);
	if(a>b&&a>c&&a>d)
	printf(" a is a greater number");
	else
	
	if(b>a&&b>c&&b>d)
	printf("b is a greater number");
	else 
	if(c>a&&c>b&&c>d)
	printf("c is a greater number");
	else
	printf("d is greater number");

return 0;
	}
