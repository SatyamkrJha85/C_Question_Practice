#include<stdio.h>
void sanskrit();
void namaste();
void hello();


int main(){
	/*
	char a;
	int arr[]={34,54,566,75};
	for(int i=0;i<=4;i++){
		printf(" %d ",arr[i]);
	}
	scanf("%c",&a);
	if(a>='f'){
		printf("satyam jha");
	}
	else {
		printf("raftaar");
	} */
	char ch;
	printf(" enter n for namaste & h for hello & p for pranam : ");
	scanf("%c",&ch);
	if(ch=='n'){
		namaste();
	}
	else if(ch=='h'){
		hello();
	}
	else if(ch=='p'){
		sanskrit();
	}
	else{
		printf(" gand maralo bosdiwalo");
	}
	

	
	
	
	
	
	
	
	
	

	
	
	
	return 0;
}
void namaste(){
	printf("namaste ji");
}
void hello(){
	printf(" hello bc");
}
void sanskrit(){
	printf(" pranam bandhu");
}
