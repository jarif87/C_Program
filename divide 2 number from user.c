#include<stdio.h>
int main()
{
int a ,b;
float result;

printf("Enter your first number:\n");
scanf("%d",&a);

printf("Enter your second  number:\n");
scanf("%d",&b);

result=(float) a/b;

printf("Your Result is %.2f",result);

return 0;

}
