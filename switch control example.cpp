#include<stdio.h>
int main()
{
	int choice,a,b,sum,s;
	while(1)
	printf("\n 1.....addition");
	printf("\n 2......odd-even");
	printf("\n 3.......printing n number");
//	printf(" \n 4. exit");
	
	printf(" enter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
	printf(" enter a two number");
	scanf("%d %d",&a,&b);
	s=a+b;
	printf(" the sum of a and b is =%d",s);
	break;
	case 2:
	printf("enter a any number");
	scanf("%d",&a);
	if(a%2==0)
	printf("your number is even");
    else
	printf(" your number is odd");
	break;
	case 3:
	printf("enter a number ");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	printf("%d",b);
	break;
	//case 4:  exit(2);
	break;
	default:
		printf("invalid choice");
	}
	return 0;
	
		
	
}
