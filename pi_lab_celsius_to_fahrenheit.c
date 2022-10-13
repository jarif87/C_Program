#include<stdio.h>
int main()
{
    float celsius,fahrenheit;

    printf("Enter your celsius number:\n");
    scanf("%f",&celsius);

    fahrenheit=(celsius*9/5)+32;
    printf("%.2f Celsius=Fahrenheit is %.2f",celsius,fahrenheit);


    return 0;
}