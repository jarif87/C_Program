#include <stdio.h>  
int main ()  
{  
// declare local variable  
int num;  
printf (" Enter a positive number: ");  
scanf (" %d", &num);  
// use right shift operator to shift the bits  
num = (num >> 2); // It shifts two bits at the right side  
printf (" \n After shifting the binary bits to the right side. ");  
printf (" \n The new value of the variable num = %d", num);  
return 0;  
}  