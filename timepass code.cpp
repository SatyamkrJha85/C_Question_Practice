#include<stdio.h>
int main(){
	
/*	int a[10],i,x,n;
	printf(" enter how mant element in yout array");
	scanf("%d",&n);
	printf(" enter your element ");	
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		//printf(" element is %d ",a[i]);
	}
	printf(" enter your searching element ");
	scanf("%d",&x);
	for(int i=0;i<n;i++){
		if(a[i]==x){
			printf("your index is %d",i);
		}
	}*/
	//int ele=98;
	//for(int i=0;i<=6;i++){
	//	if(arr[i]==ele){
		//	printf("\n%d",i);
	//	}
//	}
int i,mid,start,end,search,n,k,a[10];
printf(" enter how many ele");
scanf("%d",&n);
printf("enter your element ");
for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
}
printf(" enter your searching element");
scanf("%d",&search);
start=0;
end=n;
while(start<=end){
	mid=(start+end)/2;
	if(a[mid]<search){
		start=mid+1;
	}
	else if(a[mid] >search){
		end =mid-1;
	}
	else {
		k=1;
		break;
	}
}
	if(k==1)
	printf("item find with index %d",mid);
	else
	printf("not found");




















}
