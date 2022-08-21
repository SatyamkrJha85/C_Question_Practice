#include<stdio.h>
int main()
{
	int num,sum=0,i;
	printf("enter a number ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	sum+=i;
	printf(" sum of first=%d\n  natural number =%d\n",sum,num);
	return 0;
}
