/* 
NAME: GODFREY HINGA NDUNGU
REG NO: CT101\G\26515\25
DATE: 8\10\2025
DESCRIPTION: WHILE LOOP - BANK WITHDRAWAL PROGRAM
*/

#include <stdio.h>

int main()
{
    double Total_amount_in_bank_account;
    double Amount_to_withdraw;
    double Balance_after_withdrawal;

    // Ask the user for total amount
    printf("ENTER YOUR TOTAL AMOUNT IN YOUR BANK ACCOUNT: ");
    scanf("%lf", &Total_amount_in_bank_account);

    // Continue as long as there is money in the account
    while (Total_amount_in_bank_account > 0)
    {
        printf("\nCURRENT BALANCE IN ACCOUNT: %.2f\n", Total_amount_in_bank_account);
        printf("ENTER THE AMOUNT TO WITHDRAW: ");
        scanf("%lf", &Amount_to_withdraw);

        if (Amount_to_withdraw <= 0)
        {
            printf("INVALID AMOUNT. PLEASE ENTER A POSITIVE NUMBER.\n");
            continue;
        }

        if (Amount_to_withdraw > Total_amount_in_bank_account)
        {
            printf("YOUR WITHDRAWAL AMOUNT EXCEEDS YOUR CURRENT BALANCE!\n");
            printf("AVAILABLE BALANCE: %.2f\n", Total_amount_in_bank_account);
            continue;
        }

        // Deduct withdrawal amount
        Total_amount_in_bank_account -= Amount_to_withdraw;
        Balance_after_withdrawal = Total_amount_in_bank_account;

        printf("WITHDRAWAL SUCCESSFUL.\n");
        printf("BALANCE AFTER WITHDRAWAL: %.2f\n", Balance_after_withdrawal);

        if (Total_amount_in_bank_account <= 0)
        {
            printf("\nYOUR ACCOUNT BALANCE IS NOW ZERO. NO MORE WITHDRAWALS ALLOWED.\n");
            break;
        }
    }

    return 0;
}

