#include<stdio.h>
int  main(){
	int arr[20];
	scanf("%d",&arr[0]);
	scanf("%d",&arr[1]);
	scanf("%d",&arr[2]);

printf("your phy mark is %d \n ",arr[0]);
 printf("your chem mark is chem %d \n ",arr[1]);
 printf("your math mark is %d \n",arr[2]);
 int sum=arr[0]+arr[1]+arr[2];
 printf(" sum is %d ",sum);
 int rev=(arr[0]+arr[1]+arr[2])/3;
 printf(" rev is %d ",rev);
/*	printf(" phy %d",arr[0]);
		printf("chem %d",arr[1]);
	printf(" math %d",arr[2]);

	*/
	
	
	return 0;
}
