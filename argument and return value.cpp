#include<stdio.h>
void swap(int*,int*);
 int main()
{
	int x,y;
	printf("enter any value of x and y\n");
	scanf("%d %d",&x,&y);
	printf("before swapping x=%d\n y=%d",x,y);
	swap(&x,&y);
	printf("after swapping x=%d\n y=%d",x,y);
	return 0;
	
}
void swap(int*a ,int*b)
{
	int temp; 
	temp=*b;
	*b=*a;
	*a=temp;
	printf(" value of a and b is %d %d\n",a,b);
	
}
