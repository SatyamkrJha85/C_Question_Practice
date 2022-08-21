#include<stdio.h>
int main()
{
	int i,num,sum=0;
	printf("enter a number n");
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
	
	if(num%i==0)
	sum=sum+i;
}
	if(sum==num)
	printf("so your no is perfect number");
	else
	printf("sorry this is not a perfect number");
	return 0;
}
