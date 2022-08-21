#include<stdio.h>
void hlw(int a);
int main()
{
int c;
  hlw(5);
return 0;
}
void hlw(int a ){
	if(a==0){
		return ;
	}
	printf("hello world\n");
	 hlw(a-1);
	 //hlw(a+1);
}
