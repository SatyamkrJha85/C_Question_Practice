#include<stdio.h>
 main()
{
	char char;
	printf("enter a ch");
	scanf("%c",&char)
	if (char>=65&& char<=90)
	printf("\n CAPITAL");
	else if (char>=97&& char<=122)
	printf("\n small");
	else if (char>=48&& char<=57);
	printf("\n number");
	else if (char==32)
	printf("\n space")
	else 
	printf("\n you inter a wrong number");
	return 0;
}
