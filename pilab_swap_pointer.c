#include<stdio.h>
int swap_number(int*,int*);



int main()
{

int num1=1,num2=2;
printf("Before Swapping value is num1=%d and num2=%d",num1,num2);
swap_number(&num1,&num2);
 printf("\nAfter Swapping value is num1=%d and num2=%d",num1,num2);





    return 0;
}
int swap_number(int* x,int* y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
  


}