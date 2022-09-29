#include<stdio.h>
int main()
{
    int math,physics,chemistry;
    float total;

    printf("Enter math number\n");
    scanf("%d",&math);
    printf("Enter chemistry number\n");
    scanf("%d",&chemistry);
    printf("Enter physic number\n");
    scanf("%d",&physics);
    total=(math+physics+chemistry)/3;


    if((total<40 )|| math<33 || physics<33 || chemistry<33)
    {

        printf("you are failed %.f",total);
    }

    else
    {
        printf("you are passed %.f",total);
    }



    return 0;
}
