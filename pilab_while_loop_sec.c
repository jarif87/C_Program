#include<stdio.h>
int main()
{
int num1,num2;
while(1)
{
    printf("\nENter your number:");
    scanf("%d",&num1);
    printf("\nENter your number:");
    scanf("%d",&num2);
    if(num1>num2) 
    {
        printf("number one is greater than number two\n");
    }
    else
    {
        printf("Number two is greater than number one");
        
    }

}


    return 0;
}