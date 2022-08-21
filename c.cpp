#include<stdio.h>
int main()
{
    int x,both,math,science;
    printf("which subject you have given");


    printf("\n if math than put than 1 \n if science than put than 2\n if both than put than 3\n");
    scanf("%d",&x);


    if(x==1)
    {
    printf("you have given math");


    printf("you got 15 rupees");
    }
    if(x==2)
{
    printf("you given science");


    printf("you got 15 rupees");
}
if(x==3)
{
    printf("you given both");


    printf("you got 45 rupees");
    }
    return 0;
}

