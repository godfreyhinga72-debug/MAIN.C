/*
Name; Godfrey Hinga Ndungu
Reg no; CT101\G\26515\26515
Date; 24\09\2025
Description; calculating the volume and surface area of a cylinder
*/

// calculating the volume and surface_area of a cylinder

#include <stdio.h>
#define PI 3.14159

int main()
{
    double radius, height, volume, surface_area;
    
    // prompt user for input
    printf("Enter the radius of the cylinder:");
    scanf("%lf", &radius);
    
    printf("enter the height of the cylinder:");
    scanf("%lf",&height);
    
    //calculate the volume and surface surface_area
    volume= PI * radius * radius *height;
    surface_area= (2 * PI * radius * radius) + (2 * PI * radius * height);
    
    //display results
    printf("volume of the cylinder = %.2lf \n", volume);
    printf("surface_area of the cylinder = %.2lf \n", surface_area);

    return 0;
}
