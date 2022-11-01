#include<stdio.h>
int main()
{
    int num1,num2,num3;
    while(1)
    {

    printf("\nEnter your first number:\n");
    scanf("%d",&num1);
    printf("\nEnter your Second number :\n");
    scanf("%d",&num2);
    if(num1!=num2) 
    {
        if(num1>num2)
        {
            printf("%d is greater than %d\n",num1,num2);

        }
        else
        {
            printf("%d is greater than %d\n",num2,num1);

        }
    }



    else
   {
    printf("%d is equal to %d",num1,num2);
     }
    }


    return 0;
}