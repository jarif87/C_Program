#include<stdio.h>
#include<math.h>
int main()
{
    int x=10;
    int y=20;

    printf("the value of 3*x-4*y id %d\n",3*x-4*y);
    printf("the value of 3(x-4*y) id %d\n",3*(x-4*y));

    int a=2;
    int b=3;

    printf("the answer is %d\n",8*b/3*a); //give you wrong answer
    printf("the answer is %d\n",(8*b)/(3*a)); // right answer

    return 0;
}
