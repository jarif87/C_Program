#include<stdio.h>
int main()
{
    int year;
    printf("Enter year\n");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("it is leap year %d",year);

    }
    else if(year%100==0)
    {
        printf("it is not leap year %d",year);

    }
    else if(year%4==0)
    {
        printf("it is leap year %d",year);

    }
    else
    {
        printf("this is not leap year %d",year);
    }

    return 0;
}
