#include<stdio.h>
#include<stdlib.h>

int main()
{
            FILE *first_file;

            first_file=fopen("E:/Download/test.text","w");

            if(first_file==NULL)
            {

                printf("Error file will not open");
                exit(1);

            }
            else
            {

                fprintf(first_file,"this is my first file\n");
            }




    return 0;
}
