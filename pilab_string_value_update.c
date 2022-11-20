#include<stdio.h>
#include<string.h>
int main()
{
    char  first_str[100]="bangladesh";
    char second_str[100]="physics";
    char third_str[50]="math";
    char fourth_str[50]="English";

//is it possible to use []===>empty string?????
    strcpy(third_str,fourth_str);
    strcpy(third_str,"physic is my fav subject");

    printf("Update value is %s\n",third_str);

    return 0;




}



