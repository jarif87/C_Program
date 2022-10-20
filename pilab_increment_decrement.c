#include<stdio.h>
int main()
{
    /*
    1.pre-increment and pre deccrement
    2.substitution
    3.Evaluation
    4.assignmen
    5.post-increment and post deccremnt
        ++x=pre  increment
        x++=post increment
        x--=post decrement
        --x=pre increment

    
    */

    int x=10,y=6,z;
    z=x++*--y;
    printf("%d=%d*%d\n",z,x,y);

    return 0;
}