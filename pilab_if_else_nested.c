#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter first number:\n");
    scanf("%d",&num1);
    printf("Enter second number:\n");
    scanf("%d",&num2);

    if(num1!=num2)
    {
        printf("%d and %d are not equal\n",num1,num2);

     if(num1>num2)
        {
        printf("%d is greater than %d",num1,num2);


        }
    else
        {
            printf("%d is greater than %d",num2,num1);
        }
    }
    else
    {
        printf("%d and %d  numbers are equal\n",num1,num2);
    }

    return 0;
}