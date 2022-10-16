#include<stdio.h>

int main()
{
    /* signed char=-128   to +127
    unsigned=0 to 255*/

  unsigned char c=-10;
  signed char f=-144;
 char d=20; // 1byte=8bit
 // 2^8-1=255 [0 to 255]

 printf("%d\n", f);

 printf("%d\n", c);
 printf("%d\n", d);
 printf("%d", c);

 return 0;
}