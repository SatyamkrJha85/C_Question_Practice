#include<stdio.h>
int main ()
{
	char ch,i;
	i=15;
	printf("enter any character");
	scanf("%c",&ch);
	for(i=1;i<=5;i++)
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("your character %c is vowel",ch);
			break;
		default:
			printf(" this is %c not a vowel",ch);
			break;
			
	}
	return 0;
}
