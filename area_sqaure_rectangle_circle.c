#include <stdio.h>
int main(){

int choice;
float length, breadth, radius, area_rectangle, area_square, area_circle;

printf("enter your choice:");
printf("\n 1. area of rectangle");
printf("\n 2. area of square");
printf("\n 3. area of circle");
scanf("%d",&choice);

switch(choice)
{
    case 1 :
    printf("enter length and breadth of rectangle :");
    scanf("%f %f",&length ,&breadth);

    area_rectangle = length * breadth;

    printf("area of rectangle = %.2f", area_rectangle);
    break;

    case 2 :
    printf("enter side of square :");
    scanf("%f",&length);

    area_square = length * length;

    printf("area of square = %.2f", area_square);
    break;

    case 3:
    printf("enter radius of circle :");
    scanf("%f",&radius);

    area_circle = 3.14 * radius * radius;
    
    printf("area of circle = %.2f", area_circle);
    break;

    default:
    printf("invalid choice");

}

return 0;
}