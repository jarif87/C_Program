#include<stdio.h>

int main()
{
    int num;

    printf("Enter your number :\n"); 
    scanf("%d", &num);

    if(num%2==0)  printf("Even Number");
    else    printf("Odd number");


    return 0;
}