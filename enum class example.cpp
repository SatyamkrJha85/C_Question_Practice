#include<stdio.h>
enum week{mon,tue,wed,thus,fri,sat,sun};
int main()
{
	
	enum week day;
	day=sun;
	printf("value=%d",day);
	return 0;
}
