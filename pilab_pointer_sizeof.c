#include<stdio.h>
int main()
{
int num=20;
int*  pointer;
int* pointer_1=&num;

printf("Pointer of Size is %d\n",sizeof(pointer_1));
printf("Size of integer is %d\n",sizeof(num));
printf("first pointer size is %d\n",sizeof(pointer));



    return 0;
}