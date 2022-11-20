#include<stdio.h>

int main()

{
int sum_of_two_number(int ,int);

int (*pointer)(int ,int);

pointer=&sum_of_two_number;

int num1,num2;

printf("Enter first number:\n");
scanf("%d",&num1);

printf("Enter second number:\n");
scanf("%d",&num2);

pointer(num1,num2);


return 0;
}
int sum_of_two_number(int x,int y)
{

    int answer;
    answer=x+y;
    printf("Result is %d\n",answer);
}
