#include<stdio.h>
int main()
{
    int number;
    printf("Enter your number\n");
    scanf("%d",&number);
    while(number>10)
    {

        printf("Loop is infinite %d\n",number);
        number++;
    }

    return 0;
}
