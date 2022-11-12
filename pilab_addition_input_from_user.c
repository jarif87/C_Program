#include<stdio.h>

int main()

{
    int num1,num2,answer;
    printf("Enter your first number:\n");
    scanf("%d",&num1);
    printf("Enter second number:\n");
    scanf("%d",&num2);

    answer=sum(num1,num2);
    printf("Addition of Two number is %d",answer);

    return 0;
}
int sum(int x,int y)
{
int result;
result=x+y;
return result;

}