#include<stdio.h>
int main()
{

    char ch;

    printf("Enter your character\n");
    scanf("%c",&ch);
    if(ch<=122 && ch>=97)
    {
        printf("character is lowercase");
    }

    else
    {
        printf("its not lowercase");
    }

    return 0;
}
