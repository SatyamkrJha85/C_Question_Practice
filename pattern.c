#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(i==1)
			{
				if(j>=1 && j<=7)
				printf(" * ");
				else
				printf("   ");
			}
			else if(i==2)
			{
				if(j>=1 && j<=3 || j>=5 && j<=7)
				printf(" * ");
				else
				printf("   ");
			}
			else if(i==3)
			{
				if(j>=1 && j<=2 || j>=6 && j<=7)
				printf(" * ");
				else
				printf("   ");
			}
			else if(i==4)
			{
				if(j==1 || j==7)
				printf(" * ");
				else
				printf("   ");
			}
			else
			printf("   ");
		}
		printf("\n");
	}
	return 0;
}
