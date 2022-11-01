#include<stdio.h>
int main()
{
    int min,max;
    int size_array;
    int i;
    int number_array[10]={101,112,114,4,5,6,7,89,10,99};
    min=number_array[0];
    max=number_array[0];
    size_array=sizeof(number_array)/4;

    
    // printf("%d\n",sizeof(number_array));
    
    // printf("Size of array is %d\n",size_array);

    for(i=0;i<size_array;i++)
    {
        if(max<number_array[i])
        max=number_array[i];
        if(min>number_array[i])
        min=number_array[i];

    }
    printf("Maximum value is %d\n",max);
    printf("Minimum value is %d\n",min);


    return 0;

}