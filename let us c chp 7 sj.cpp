#include<stdio.h>
int main()
{
	int ch='a'+'b';
	switch(ch)
	{
	
	case 'a':
	case 'b':
		printf("you entred b\n");
	case 'A':
		printf("a as in ashar\n");
	case 'b'+'a':
		printf("you entered a and b\n");
	}
	return 0;
}
	

