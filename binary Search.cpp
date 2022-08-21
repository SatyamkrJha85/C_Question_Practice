#include<stdio.h>
#include<conio.h>
int  main(){
	int a[78]={43,23,45,65,654};
	int lr=0,up=4,f=0,mid,item;
	printf("enter a element ");
	scanf("%d",&item);
	while(lr<=up){
		mid=(lr+up)/2;
		if(a[mid]==item){
			f=1;
			break;
		}
		if(a[mid]<item)
		lr=mid+1;
		else
		up=mid-1;
				
	}
	if(f==1)
	printf("item find with index %d",mid);
	else
	printf("not found");
	return 0;
}
