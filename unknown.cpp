#include<stdio.h>
int main()
{
	int a,b,c;
	printf(" enter a three number");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b<c)
	printf("a=%d ",b);
	if (b<c)
	printf("b=%d",b);
	if(c<a)
	printf("c=%d",c);
	return 0;
}
