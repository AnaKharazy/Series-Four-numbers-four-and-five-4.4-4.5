#include <stdio.h>

int main()
{
    int number,length,width,area,perimeter;
    char letter;
    float perimeter_Circle, area_Circle,radius;

    printf("\n square perimeter(1m)\n square area(1n)\n rectangle perimeter(2n)\n rectangle area(2m)\n circle perimeter(3n)\n circle area(3m)\n");
    printf("\n enter a number and a letter:");
    scanf("%d %c",&number,&letter);

    if((number == 1) && (letter == 'm'))
    {
        printf("\n the perimeter of a square is equal to one side * 4");
        printf("\n enter a side : ");
        scanf("%d",&length);
        perimeter = length * 4;
        printf("square perimeter = %d",perimeter);

    }else if ((number == 1) && (letter == 'n'))
    {
        printf("\n the area of a square is equal to one side * itself");
        printf("\n enter a side:");
        scanf("%d",&length);
        area = length * length;
        printf("square area = %d",area);

    }else if ((number == 2) && (letter == 'n'))
    {
        printf("\n the perimeter of a rectangle is equal to (length + width) * 2");
        printf("\n enter the length:");
        scanf("%d",&length);
        printf("\n enter the width:");
        scanf("%d",&width);
        perimeter = (length + width) * 2;
        printf("rectangle perimeter = %d",perimeter);

    }else if ((number == 2) && (letter == 'm'))
    {
        printf("\n the area of a rectangle is equal to length * width ");
        printf("\n enter the length:");
        scanf("%d",&length);
        printf("\n enter the width:");
        scanf("%d",&width);
        area = length * width;
        printf("rectangle area = %d",area);

    }else if ((number == 3) && (letter == 'n'))
    {
        printf("\n the perimeter of the circle is equal to 2 * radius * pi");
        printf("\n enter the radius:");
        scanf("%f", &radius);
        perimeter_Circle = 2 * radius * 3.14;
        printf("circle perimeter= %f ",perimeter_Circle);

    }else if ((number == 3) && (letter == 'm'))
    {
        printf("\n the area of the circle is equal to radius * radius * pi");
        printf("\n enter the radius:");
        scanf("%f", &radius);
        area_Circle = 3.14 * radius * radius;
        printf("circle area= %f ",area_Circle);

    }else
    {
        printf("\n Wrong Input!");
    }
    return 0;
}