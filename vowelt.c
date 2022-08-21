#include <stdio.h>

int main()
{
    char ch;
    printf("Enter an Alphabet\n");
    scanf("%c",&ch);
   if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')

    printf("%c is vowel",ch);//Display vowels

else
    printf("%c  is  not a vowel",ch);//display consonant


    return 0;
}
