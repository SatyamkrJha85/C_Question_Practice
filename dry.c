#include<stdio.h>
int main()
{

int a,b;
printf("enter a number of a ");
scanf("%d",&a);
printf("enter a number of b");
scanf("%d",&b);
printf("before swapping ");
printf("\n%d \n%d",a,b);

a=a+b;
b=a-b;
a=a-b;

printf("after swapping\n ");
printf("A:%d b:%d",a,b);
return 0;
}

