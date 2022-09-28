#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>=60)
    {
        printf("you can't drive\n");

    }
    else
    {
        printf("you can drive\n");
    }
    if (age==50)
    {
        printf("half century");
    }
    return 0;
}
