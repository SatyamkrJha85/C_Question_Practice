#include<stdio.h>
union student
{
	int i;
	float x;
};
int main()
{
	
	union student mark;
	mark.i=50;
	mark.x=2385.5;
	printf("%f\n",mark.x);
	printf("%d\n",mark.i);
	return 0;
}
