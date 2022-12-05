#include<stdio.h>
int main()
{
int dividend,divisor;
int quotient,reminder;

printf("Enter your dividend : ");
scanf("%d",&dividend);

printf("Enter your divisor : ");
scanf("%d",&divisor);

quotient=dividend/divisor;

reminder=dividend%divisor;

printf("Quotient is %d, Reminder is %d\n",quotient,reminder);

return 0;
}