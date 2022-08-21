#include<stdio.h>
#include<conio.h>
main()
{
int i=1,n,sum=0,j=1,add=0;

printf("Enter n :\n");
scanf("%d",&n);
i=n;
n=1;
while(i>=n)
{
j=1;
add=0;
while(j<=n)
{
add=add+j;
j++;
}
sum=sum + add;
n++;
}
printf("Result :\n%d",sum);
return 0;
}
