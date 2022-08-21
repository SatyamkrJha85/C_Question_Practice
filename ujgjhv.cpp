#include<stdio.h>
int main(){
	
	/*int arr[]= {43,5654,45,455,45,44};
	for(int i=0;i<6;i++){
		printf("%d",arr[i]);
	}
	*/
	int i=100;
	int *ptr;
	ptr=&i;
	printf("%d\n",i);
	printf("%d\n",i);
//	printf("%d\n",ptr);
//	printf("%d\n",&ptr);
	printf("%d\n",&i);
//	printf("%d\n",*ptr);
	printf("%d\n",*(&i));
	return 0;
}
