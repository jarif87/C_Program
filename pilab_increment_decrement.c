#include<stdio.h>
int main()
{
int x=10,y=12;
int a=7,b=8;
int c=++a+a++;     //++a=8 // a++=7+1=8

int z=x++*x++;
printf("result is z is  %d\n",z);
printf("value of  x is  %d\n",x);
printf("value of  x is  %d\n",x);


printf("Result is %d=%d*%d\n",z,x,x);
printf("Result is %d\n",c);

return 0;
}