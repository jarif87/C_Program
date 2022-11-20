#include<stdio.h>
int main()
{
    struct student_data
    {

        int roll;
        char name[100];
        float result;
        char address[100];

    };

    struct student_data S1={10,"shakib",3.54,"dhaka,bangladesh"};

    printf("Roll is %d\n",S1.roll);

    printf("Name is %s\n",S1.name);

    printf("Result is %.2f\n",S1.result);

    printf("Address is %s\n",S1.address);




    return 0;
}