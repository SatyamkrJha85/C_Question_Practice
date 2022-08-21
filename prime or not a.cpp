#include<stdio.h>
int main()
{

int n,i;
printf("enter a number ");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
	if(n%i==0)
	{
	break;
}
}

if(i>n/2)
printf("%d is a prime number",n)	;
else
printf("%d  is a not a prime number ",n);

     return 0;
}
