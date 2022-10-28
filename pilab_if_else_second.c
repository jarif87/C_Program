#include<stdio.h>
int main(void)
{
    int num1;
    printf("Enter your number for check odd and even number:\n");
    scanf("%d",&num1);

    if(num1%2==0)
    {
        printf("This is an even number\n");

    }
    else
    {
        printf("This is an odd number\n");
    }
     
     printf("Program End\n");


    return 0;
}