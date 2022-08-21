#include<stdio.h>
void doWork(int a,int b,int *sum,int *prod,int *avg);
int main(){
	int x=34;
	int y=66;
	int sum,prod,avg;
	doWork(x,y,&sum,&prod,&avg);
	printf(" sum = %d, prod = %d , avg = %d \n ",sum,prod,avg);
	return 0;
	
	
}
void doWork(int a,int b,int *sum,int *prod,int *avg){
	if(a>b){
		printf(" a is big \n");
	}
	else {
		printf(" b is big \n");
	}
*sum=a+b;
*prod=a*b;
*avg=(a+b)/2;
}
