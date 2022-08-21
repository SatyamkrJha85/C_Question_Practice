#include<stdio.h>
#include<stdlib.h>
int main()
{
	int choice,num,i,fact;
	while(1)
	printf("\n 1.factorial\n");
	printf("2.prime\n");
	printf("3. odd/even\n");
	printf("4.exit\n");
	printf("enter your choice");
	scanf("%d",&choice);
  switch(choice)
  {
  
  case 1:
  	printf("enter a num");
  	scanf("%d",&num);
  	fact=1;
  	for(i=1;i<=num;i++)
  	fact=fact*i;
  	printf("factorial value is =%d",fact);
  	break;
 case 2:
 	printf(" enter a number");
 	scanf("%d",&num);
 	for(i=2;i<num;i++)
 	{
	 if(num%i==0)
	 {
	 printf("not a prime number");
	 break;
}
}
if(i==num)
printf("prime number");
break;

case 3:
	printf("enter a number");
	scanf("%d",&num);
	if(num%2==0)
	printf(" number is even ");
	else
	printf("number is odd");
	break;
case 4:
	exit(0);
	default:
		printf("kya click kr rha hai andhe");
		break;
	}

  

return 0;
}
	
