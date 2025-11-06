/*
NAME: GODFREY HINGA NDUNGU
REG NO : CT101/G/26515/25
DATE : 6TH NOVEMBER, 2025
DESCRIPTION :This program reads daily sales transactions
             from a file named sales.txt, calculates the
            total sales for the day, and displays it.
*/

#include <stdio.h>

int main() {
    FILE *fptr;
    float amount, total = 0.0;

    // Open file for reading
    fptr = fopen("sales.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file! Make sure sales.txt exists.\n");
        return 1;
    }

    // Read all transactions from the file
    while (fscanf(fptr, "%f", &amount) == 1) {
        total += amount;
    }

    // Close the file after reading
    fclose(fptr);

    // Display the total sales
    printf("---------------------------------------\n");
    printf(" TOTAL SALES FOR THE DAY: Ksh. %.2f\n", total);
    printf("---------------------------------------\n");

    return 0;
}

