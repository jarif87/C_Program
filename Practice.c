#include <stdio.h> 

int sum (int x, int y);//Function Declaration 

int main(void)
{
    printf("This is a simple program\n");

    int num1 = 2, num2 = 3, ans; 

    ans = sum(num1, num2);//Function Calling 

    printf("Sum is: %d\n", sum(num1, num2));

    return 0; 
}



int sum (int x, int y) 
{
    return x + y;
}
