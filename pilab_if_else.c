#include<stdio.h>
int main()
{

    int True=1;
    int False=0;
    if(False) // question here
    {
        printf("hello\n");
    }
    
    else
    {
        printf("program is finished");
    }
/* 
  if(True) // question here
    {
        printf("hello\n");  ====>output==>hello
        but when if(False) its output ===>none ???????????????????????????????????
        if(False==0)=====>output==>hello
    }
*/


    return 0;
}