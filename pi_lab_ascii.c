#include<stdio.h>
#include<limits.h>
/*
SIGN
char--->>>>CHAR_MAX
--------->>>CHAR_MIN 
UNSIGN
UCHAR_MAX

INT
----->INT_MAX
------>INT_MIN
USIGN---->UINT_MAX

FLOAT
--------->FLOAT_MAX
--------->FLOAT_MIN
USIGN---->UFLOAT_MAX
*/

int main(void)
{
    signed char c;
    unsigned char w;
    char   v='A';  // for ascii value and don't use =("") use this=(' ')
    char m='S';  //for character or later
    int b=10;
    float d=10.33;
    short e=10.23;
    double f=55.22;
    printf("this is a character %c\n",m);  // print later
    printf("The ascii value is %d\n",v);     //print ascii value
    printf("size of character %d\n",sizeof(v)); 
    printf("size of integer %d\n",sizeof(b));
    printf("size of float %d\n",sizeof(d));
    printf("size of short %d\n",sizeof(e));
    printf("size of double %d\n",sizeof(f));
    printf("Size of short is %d\n",sizeof(short));
    printf("Maximum value is %d\n",CHAR_MAX);
    printf("Minimum value is %d\n",CHAR_MIN);
     printf("Maximum value is %d\n",INT_MAX);
          printf("Maximum value is %d\n",UINT_MAX);

    /*
    1.variable
    2.data type
    3.Expression
    4.pointer*/

    return 0;
}