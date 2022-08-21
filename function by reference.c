#include<stdio.h>
int change(int *);
int main()
{
	int a=5;
	printf("\n This value is before function call %d\n",a);
	change(&a);
	printf("\nThis value is after function call %d\",a);	
}
int change(int *x)
{
	*x=*x+100;
	printf("\nThis value is from inside the function %d",*x);
}
