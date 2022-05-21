#include <stdio.h>


int main() {

    int age, weight;

    printf("\n enter the age: ");
    scanf("%d", &age);
    printf("\n enter the weight: ");
    scanf("%d", &weight);

    if ((age == 20) && (weight == 60)) {
        printf("Exercise 2 hours a day - mountain_climbing once a week -play volleyball or basketball twice a week");
    } else if ((age == 20) && (weight == 80)) {
        printf("Exercise 4 hours a day - Mountain_climbing twice a week -play Tennis 3 hours a week - swimming twice a week");
    } else if ((age == 30) && (weight == 60)) {
        printf("Exercise for an hour and a half a day - Mountain_climbing once a week - swimming twice a week - Light diet");
    } else if ((age == 30) && (weight == 80)) {
        printf("Exercise for an hour and a half a day - Mountain_climbing once a week - swimming twice a week - Heavy diet");
    } else if ((age == 40) && (weight == 60)) {
        printf("Exercise 1 hour a day - Mountain_climbing twice a month - swimming three times a week - stroll twice a week");
    } else if ((age == 40) && (weight == 80)) {

        printf("Exercise 1 hour a day - Mountain_climbing three times a month - swimming three times a week - stroll every day");
    }else if((age == 50)&&((weight == 60)||(weight == 80)))
    {
        printf("Exercise 1 hour a day - Exercise 1 hour every day - swimming twice a week - stroll every day - Balanced diet");
    }else
    {
        printf("Exercise 1 hour a day - Exercise every day - swimming twice a week - Mountain_climbing once a week - stroll every day - Balanced diet");
    }



    return 0;
}