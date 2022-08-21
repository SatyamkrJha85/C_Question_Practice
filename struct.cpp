#include<stdio.h>
struct student

{
	int rollno,name,gender, mark;
	
};
int main()
{
	struct student d1;
	printf("enter a roll no");
	scanf("%d",&d1.rollno);
//	printf("%d",d1.rollno);
	printf("enter a name of student");
	scanf("%d",&d1.name);
	printf("enter a gender ");
	scanf("%d",&d1.gender);
	printf("enter a mark of student");
	scanf("%d",&d1.mark);
	printf("%d %d %d %d",d1.rollno,d1.name,d1.gender,d1.mark);
return 0;
}
