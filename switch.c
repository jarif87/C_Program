#include<stdio.h>
int main()
{
    int movie_rating;
    printf("Enter your movie rating 1_to_5\n");
    scanf("%d",&movie_rating);

    switch(movie_rating)
    {

    case 1:
        printf("Movie rating is 1");
        break;
    case 2:
        printf("Movie rating is 2");
        break;
    case 3:
        printf("Movie rating is 3");
        break;
    case 4:
        printf("Movie rating is 4");
        break;
    case 5:
        printf("Movie rating is 5");
        break;

    default:
        printf("invalid rating");
        break;


    }


    return 0;
}
