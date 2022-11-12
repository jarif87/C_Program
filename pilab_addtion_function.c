#include<stdio.h>
int addition(int ,int );

int main()
{
int num1=2,num2=4,result;
result=addition(num1,num2);
printf("Result is %d\n",result);


return 0;
}
int addition(int x,int y)
{
    return x+y;
}