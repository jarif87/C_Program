#include<stdio.h>
#include<string.h>
int main()

/*image.png

problem not working properly

*/
{
union student_data
{

    int roll;
    char name[50];
    int age;

};
union student_data student_info;

student_info.roll=20;
strcpy(student_info.name,"riyad");
student_info.age=18;

// printf("Roll is %d\n",student_info.roll);
printf("Name is %s\n",student_info.name);
// printf("Age is %d\n",student_info.age);

return 0;
}