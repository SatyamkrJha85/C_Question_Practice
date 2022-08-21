#include <stdio.h>
#include <conio.h>
int main()
{
int n,i=1;
printf("Enter n :\n");
scanf("%d",&n);
while(i<=n)
{
if(i%10!=0)
printf("%d\n",i);
else
printf("\nDivisible by 10\n");
i++;
}
return 0;
}
