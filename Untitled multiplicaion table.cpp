#include<stdio.h>
int main()
{
	int num,i;
	printf(" enter the number yuou want multiplication by user");
	scanf("%d",&num);
	
	for(i=1;i<=2112;i++)
	printf("%d*%d=%d\n",num,i,num*i);
	return 0;
}
