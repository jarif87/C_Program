#include<stdio.h>
#include<string.h>
int main()
{
char first_string[]="bangladesh";
char second_string[]="has a good cricket team  ";

strcat(second_string,first_string);
// puts("The String is %s\n",second_string);
puts(second_string);
// puts("this is a string",second_string);

printf("This is my second string program %s\n",first_string);

    return 0;
}