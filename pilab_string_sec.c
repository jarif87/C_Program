#include<stdio.h>
#include<string.h>
int main()
{
char name[20]={'p','i','l','a','b','a','c','a','d','e','m','y'};
char name_2[100];
char str1[]="Hello Geeks!";
char str2[] = "GeeksforGeeks";
printf("Enter your name:\n");
scanf("%s",name_2);
printf("Your Name is %s\n",name_2);
printf("Length of the String is %zu\n",strlen(name)); //string length

strcpy(name_2,name);   //copy string
printf("The String is %s\n",name_2);

strcpy(str2,str1);
printf("The string is %s\n",str2);
puts(str2);         

return 0;
}