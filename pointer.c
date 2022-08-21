#include<stdio.h>
int main(){
int a=30,b=40,*s=0;
printf("%d\n",*s);
Sum(a,b,&s);//function call
printf("%d",*s);
}
int Sum(int c,int d,int  *s){//declare and define
	 *s=c+d;
	return ;
}
