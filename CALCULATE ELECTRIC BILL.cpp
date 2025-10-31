/*
NAME: GODFREY HINGA NDUNGU
REG NO: CT101/G/26515/25
DATE: 30/10/2025
DESCRIPTION: FUNCTION TO CALCULATE ELECTRIC BILL BASED ON UNITS CONSUMED
*/

#include <stdio.h>

// Function prototype
float calculateElectricBill(int units);

int main() {
    int units;
    float totalBill;

    // Input number of units consumed
    printf("Enter the number of electricity units consumed: ");
    scanf("%d", &units);

    // Function call
    totalBill = calculateElectricBill(units);

    // Display result
    printf("\nTotal Electricity Bill: KSh. %.2f\n", totalBill);

    return 0;
}

// Function definition
float calculateElectricBill(int units) {
    float bill = 0;

    if (units <= 100) {
        bill = units * 10.0;
    } 
    else if (units <= 200) {
        bill = (100 * 10.0) + ((units - 100) * 15.0);
    } 
    else {
        bill = (100 * 10.0) + (100 * 15.0) + ((units - 200) * 20.0);
    }

    return bill;
}

