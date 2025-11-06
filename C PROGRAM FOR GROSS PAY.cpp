/*
NAME; GODFREY HINGA NDUNGU
REG NO; CT101/G/26515/25
DATE; 6TH NOV, 2025
DESCRIPTION; C PROGRAM FOR THE GROSS PAY
*/



#include <stdio.h>

int main() {
    int hours;
    float hourly_wage, gross_pay, tax, net_pay;

    // Input section
    printf("Enter hours worked in a week: ");
    scanf("%d", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &hourly_wage);

    // Step 1: Calculate gross pay
    if (hours <= 40) {
        gross_pay = hours * hourly_wage;
    } else {
        int overtime_hours = hours - 40;
        gross_pay = (40 * hourly_wage) + (overtime_hours * hourly_wage * 1.5);
    }

    // Step 2: Calculate taxes
    if (gross_pay <= 600) {
        tax = 0.15 * gross_pay;
    } else {
        tax = (0.15 * 600) + (0.20 * (gross_pay - 600));
    }

    // Step 3: Calculate net pay
    net_pay = gross_pay - tax;

    // Output section
    printf("\n--- PAYSLIP ---\n");
    printf("Hours Worked: %d\n", hours);
    printf("Hourly Wage: $%.2f\n", hourly_wage);
    printf("Gross Pay: $%.2f\n", gross_pay);
    printf("Tax: $%.2f\n", tax);
    printf("Net Pay: $%.2f\n", net_pay);

    return 0;
}

