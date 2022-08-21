#include<stdio.h>
int circle(int rad);
int square(int r);
int main()
{
	int ra=5;
	printf("%d\n",circle(ra));
	
	square(ra);
	return 0;
}
int circle(int rad){
	rad=2*3.14*rad;
	return rad;
}
int square(int r){
	int square=r*r;
	printf("%d",square);
	return 0;
}
