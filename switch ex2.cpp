#include<stdio.h>
int main()
{
	char ch;
	printf("enter a any alphabet");
	scanf("%c",&ch);
	switch(ch)
	{
	case 'a':
	case 'A':
	printf("a as in achar\n");
	break;
	case 'b':
	case 'B':
	printf("b as in brain");
	break;	
	case 'c':
	case 'C':
		printf("c as in cookie ");
		break;
		default :
			printf(" who the  hell are you");
			break;
	
	}
	return 0;
}
