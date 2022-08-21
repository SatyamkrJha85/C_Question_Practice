#include <stdio.h>
#include <conio.h>

int  main()
{
   int a[20],i,x,n;
    printf("How many elements?");
    scanf("%d",&n);
     
    printf("Enter array elements:n");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
     
    printf("nEnter element to search:");
    scanf("%d",&x);
     
    for(i=0;i<n;++i){
	
        if(a[i]==x){
        	printf(" endex of %d",i);
        }
        else{
        	printf("not found");
		}
    }
    
		
        //    break;
     
    //if(i<n)
      //  printf("Element found at index %d",i);
   // else
        //printf("Element not found"); 
        
        
        
      /*  int n,x,a[20],i;
        printf("enter a number do you want");
        scanf("%d",&n);
        printf("enter a number");
        for( i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("enter a element do you search");
        scanf("%d",&x);
        for( i=0;i<n;i++)
        if(x==a[i])
        //if (i<n)
        printf("%d",i);
        else
        printf("not found"); */
    return 0;
   
}
