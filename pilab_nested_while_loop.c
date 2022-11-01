#include<stdio.h>
int main()
{

    int num1=12,num2=14;

    printf("\nNested while loop\n");
       
 
    while(num1<=30)
    {
        num2=12;

    
    while(num2<=30)
    {
        printf("%d ",num2);
        num2++;
    }
    printf("\n");
    num1++;
    }


    return 0;
}