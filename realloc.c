#include<stdio.h>
#include<stdlib.h>
int main()
{
    /* 
                                                 # malloc()-->Memory allocation (malloc), is an in-built function in C. 
     This function is used to assign a specified amount of memory for an array to be created. 
     It also returns a pointer to the space allocated in memory using this function.
     ===>>>initialize with garbage value

     
     #calloc()==>>>>initialize with 0

    # realloc()=====>>>>>>>>>>increase or decrease the size of array

    #free()=====>>>>>>>delocates the memory previously allocated call to calloc,realloc,malloc()
     
     
     */
    int number;
    int i;
    printf("Enter number of array element:\n");
    scanf("%u",&number);

    int *pointer=(int*)malloc(number*sizeof(int));

    for(i=0;i<number;i++) 
    pointer[i]=i+1;

    // free(pointer);

    int *new_pointer=(int*)realloc(pointer,(number/2)*sizeof(int));

    printf("Previous address %d and New address %d \n",pointer,new_pointer);



    for(i=0;i<(number/2);i++)

    printf("%d\n",new_pointer[i]);

        // free(pointer);
        // free(new_pointer);

    // pointer[0]=10;
    // pointer[1]=20;
    // pointer[2]=30;
    
    // printf("Index Value is %d\n",pointer[2]);
    // printf("Value is %d\n",*pointer);


    return 0;
}