#include<stdio.h>
int main()
{
    /*%u. It is used to print the unsigned integer value where the unsigned integer means that the variable can hold only positive value.*/

// array is called internal pointer
int number=10;
int number_2=20;
int*   first_pointer=&number;
int*  second_pointer=&number_2;
int* third_pointer=number;

printf("value is %u\n",first_pointer);
printf("second value is %u\n",&number);
printf("Third value is %u\n",&second_pointer);
printf("fourth value is %u\n",  *second_pointer);
printf("Fifth value is %u\n",   *(&number));  //print address and variable_value

// printf("value is %u\n",);





    return 0;

}