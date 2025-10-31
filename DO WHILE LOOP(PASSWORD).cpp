/*
NAME: GODFREY HINGA NDUNGU
REG NO: CT101/G/26515/25
DATE: 30/10/2025
DESCRIPTION: PASSWORD SYSTEM USING DO WHILE LOOP
*/

#include <stdio.h>

int main() {
    int password;

    do {
        printf("Enter password: ");
        scanf("%d", &password);

        if (password != 1234) {
            printf("Incorrect password. Try again.\n\n");
        }

    } while (password != 1234);

    printf("\nAccess Granted.\n");

    return 0;
}

