#include<stdio.h>
#include<math.h>
void calculate(float n);
int main(){
	
	float r=56;
	printf("our actual price is %f\n",r);
	printf("%f\n",pow(r,2));
	calculate(r);
	return 0;
}
   void calculate(float n){
   	n=n+(0.18*n);
   	printf(" final price is %f",n);
   }
