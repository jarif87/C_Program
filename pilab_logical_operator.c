#include<stdio.h>
int main()
{
    int first_number=40,second_number=20,third_number=3;
/* logical and=(&&)
logical or=(||)
logical not=(!)
*/
printf("Logical And Result =%d\n",first_number&&second_number); //returns true  if all conditions satisfy
printf("Logical OR Result =%d\n",first_number || second_number);//returns true  if any conditions satisfy
printf("Logical Not Result =%d\n",! third_number);

    return 0;
}