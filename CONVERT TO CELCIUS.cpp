/*
NAME: GODFREY HINGA NDUNGU
REG NO: CT101/G/26515/25
DATE: 22nd OCT, 2025
DESCRIPTION: CONVERTING TEMPERATURE FROM FAHRENHEIT TO CELSIUS
*/

#include <stdio.h>

// Function prototype
float convert_to_celsius(float F);

int main() {
    float F, Celsius;

    printf("Enter the Temperature in Fahrenheit: ");
    scanf("%f", &F);

    // Function call
    Celsius = convert_to_celsius(F);

    printf("%.2f degrees Fahrenheit is equal to %.2f degrees Celsius\n", F, Celsius);

    return 0;
}

// Function definition
float convert_to_celsius(float temp) {
    return (temp - 32) * (5.0 / 9.0);
}


