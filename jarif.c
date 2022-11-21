#include<stdio.h>
#include<math.h>
int main()
{
    int number;
    printf("Enter  area of circle:\n");
    printf("Enter area of Rectangle:\n");
    printf("Enter area of Triangle:\n");

    scanf("%d",&number);

    switch(number)
    {

        case 1:
        
            {
            int a,b,c;
            float s,area;
            printf("Enter the sides of triangle:\n");
            scanf("%d%d%d",&a,&b,&c);
            s=(float)(a+b+c)/2;
            area=(float)(sqrt(s*(s-a)*(s-b)*(s-c)));
            printf("Area of Triangle is %.2f",area);
            break;
            }
        
        case 2: 
{
            float radius,area;
            printf("Enter radius of circle:\n");
            scanf("%f",&radius);
            area=(float)3.14*radius*radius;
            printf("Area of Circle is %.2f",area);
            break;
}
        case 3:
        {
        float length,breadth,area;
        printf("Enter Length and Breadth of Rectangle:\n");
        scanf("%f%f",&length,&breadth);
        area=(float)length*breadth;
        printf("Area of Rectangle is %.2f",area);
        break;
        }
    default:
  
    printf("invalid");
    break;
    }
  
  


    return 0;
}