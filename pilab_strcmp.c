#include<stdio.h>
#include<string.h>
int main()
{
     char msg_1[]="bangladesh is a poor country";
     char msg_2[]="bangladesh is a rich country";
     char msg_3[]="bangladesh";
     char msg_4[]="bangla";

     int x=strcmp(msg_4,msg_3);
     printf("result of x is %d\n",x);
     printf("result of msg_3 and msg_4 is %d\n",strcmp(msg_3,msg_4));
     printf("result of msge_1 and msge_2 is = %d\n",strcmp(msg_1,msg_2)); // ????????????????????why msg_2 large???

 

    return 0;
}