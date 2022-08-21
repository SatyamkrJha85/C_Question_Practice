#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a three number");
	scanf("%d %d %d",&a,&b<&c);
	if(a>b)
	{
		if(a>c)
		printf("a is a greater number");
		else
		printf("c is a greater number");
		
		}
		else
		{
			if(b>c)
			printf("b is greater number");
			else
			printf("c is greater number");
			
		}
		return 0;
}
