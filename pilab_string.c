#include<stdio.h>
#include<string.h>
int main()
{
char name[20]={'p','i','l','a','b','a','c','a','d','e','m','y'};
char name_2[100];

printf("Enter your name:\n");
scanf("%s",name_2);
printf("Your Name is %s\n",name_2);
printf("Length of the String is %zu\n",strlen(name));


return 0;
}