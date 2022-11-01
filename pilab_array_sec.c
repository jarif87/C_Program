#include<stdio.h>
int main()
{
int i=0;
int roll_number[10]={110,112};

for(i=0;i<=10;i++)
{
    roll_number[i]=110+i;
    printf("value is %d\n",roll_number[i]);

}


    return 0;
}