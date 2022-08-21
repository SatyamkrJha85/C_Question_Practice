 #include<stdio.h>
 int  search(int size,int a[],int item);
 int main(){
 	int a[20];
 	printf("enter your array size");
 	int size,i;
 	scanf("%d",&size);
 	printf(" enter your array");
 	for(i=0;i<size;i++){
 		scanf("%d",&a[i]);
	 }
	 int item;
	 printf(" enter your searching elment ");
	 scanf("%d ",&item );
	 search(size,a,item);
	 
}
int  search (int size,int a[],int item){

	int lr=0,up=size,mid;

	while(lr<=up){
		mid=(lr+up)/2;
		if(a[mid]==item){
		//	f=1;
		printf(" index is %d",mid);
			break;
		}
		if(a[mid]<item)
		lr=mid+1;
		else
		up=mid-1;
				
	}
	return 0;
	
 }

