#include<stdio.h>
#include<stdlib.h>
int main()
{
    char data_file[100];

            FILE *first_file;

            first_file=fopen("E:/Download/test.text","r");

            if(first_file==NULL)
            {

                printf("Error file will not open");
                exit(1);

            }
            else
            {
               while(fscanf(first_file,"%[^\n]  ",data_file) !=EOF)
               {
                printf("%s\n",data_file);
               }
              
            }




    return 0;
}
