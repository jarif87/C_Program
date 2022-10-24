#include<stdio.h>
int main()
{
    int a=12,b=15,c=0;
                                                     // 12=100.........//15=1111
    c=a&b;
    printf("Value of And is %d\n",c);
    c=a|b;
    printf("value of OR is %d\n",c);

    c=a^b;
    printf("Value of XOR is %d\n",c);

    

    return 0;
}