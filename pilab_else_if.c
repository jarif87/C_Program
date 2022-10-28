#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter first number:\n");
    scanf("%d",&num1);
    printf("Enter second number:\n");
    scanf("%d",&num2);

    if((num1!=num2) &&(num1>num2))
    {
        printf("%d is greater than %d\n",num1,num2);

    }
    else if((num1!=num2) &&(num1<num2))
    {
        printf("%d is greater than %d\n",num2,num1);

    }
    else
    {
        printf("Both numbers are equal\n");
    }


    return 0;
}