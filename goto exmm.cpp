#include<stdio.h>
#include<stdlib.h>
int main()
{
	int goals;
	printf("enter the no of goals scored against india");
	scanf("%d",&goals);
	if(goals<=5)
	goto sos;
	else
	{
	printf("about time soccer players learnt c\n");
	printf("ano said goodbye adieul to soccer\n");
	exit(1);
}
sos:
	printf("to err is human \n");
	return 0;
}

