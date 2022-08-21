#include<stdio.h>
struct date
{
	int d,m,y;
};
int main()
{
	struct date today ,d1;
	d1.d=12;
	d1.m=11;
	d1.y=2002;
//	d1=today;
	printf("enter a today date");
	scanf("%d",&d1.d);
	printf("enter a month");
	scanf("%d",&d1.m);
	
	//scanf("%d %d %d",&d1.d,&d1.m,&d1.y);
	printf("date %d %d %d",d1.d,d1.m,d1.y);
	return 0;
	
	
}
