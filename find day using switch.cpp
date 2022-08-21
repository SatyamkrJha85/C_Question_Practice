//Find a dAy using swith 
#include<stdio.h>
int main()
{
	int i,j;
	printf("enter a any digit\n");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			printf("monday\n");
			break;
		case 2:
			printf("tuesday\n");
			break;
		case 3:
			printf(" wednusday\n");
		    break;
		case 4:
			printf("thusday\n");
			break;
		case 5:
		    printf("friday\n");
		    break;
		case 6:
			printf(" saturday\n");
			break;
		case 7:
			printf(" sunday\n ");
			break;
			default:
				printf(" kya click kr hai bsdk\n");
				break;
			}
				
			//	printf(" have a nice day");
			printf("enter any no\n");
			scanf("%d",&j);
			switch(j)
			{
				case 1:
					printf("sunday= go to cinema hall");
				break;
				case 2:
					printf("monaday to saturday= go to school");
				break;
				default:
					printf(" andha hai kya lwde");
					break;
					
				
				
			}
		
	
	return 0;
}
