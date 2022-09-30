#include<stdio.h>
int main()
{
    int num1,num2,num3,num4;

    printf("Enter first number\n");
    scanf("%d",&num1);
    printf("Enter second number\n");
    scanf("%d",&num2);
    printf("Enter third number\n");
    scanf("%d",&num3);
    printf("Enter fourth number\n");
    scanf("%d",&num4);
    if(num1>num2)
    {
        if(num1>num3)
        {
            if(num1>num4)
            {
                printf("Number1 is big %d",num1);



            }
            else
            {
                printf("Number4 is big %d",num4);
            }
        }
    }
    else if(num2>num3)
    {
        if(num2>num4)
        {
            printf("Number2 is big %d",num2);
        }
        else
        {
            printf("Number4 is bif %d",num4);
        }
    }
    else if(num3>num4)
    {

        printf("Number3 is big %d",num3);
    }
    else
    {
        printf("Number4 is big %d",num4);
    }
    return 0;
}

