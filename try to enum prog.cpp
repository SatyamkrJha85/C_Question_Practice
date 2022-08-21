#include<stdio.h>
enum week{sun,mon,tue,wed,thus,fri,sat};
int main()
{
	enum week day1,day2;
	int diff;
	day1=mon;
	day2=sat;
	diff=day2-day1;
 printf("day between day1&day2=%d\n",diff);
 if(day1<day2)
printf("day 1 comes before day 2\n") ;
else
printf("day 2 comes before day 1");
 return 0;
 
}

