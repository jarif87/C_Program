#include<stdio.h>
#include<string.h>

int main()
{

struct employee_data
{
int salaray;
char name[100];
char address[100];
char email[100];
 long long int  mobile_number;
char position[100];




};
struct employee_data first_employee;

first_employee.salaray=1000;
strcpy(first_employee.name,"tamim");
strcpy(first_employee.address,"dhaka");
strcpy(first_employee.email,"xyz@gmail.com");
first_employee.mobile_number= 1000456870000;
strcpy(first_employee.position,"Manager");


printf("Salary is %d\n",first_employee.salaray);

printf("Name is %s\n",first_employee.name);
printf("Address is %s\n",first_employee.address);
printf("Email is %s\n",first_employee.email);
printf("Mobile number is %lld\n",first_employee.mobile_number);
printf("Position is %s\n",first_employee.position);






    return 0;
}