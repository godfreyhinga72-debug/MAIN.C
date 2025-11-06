/*
NAME; GODFREY HNGA NDUNGU
REG NO; CT101/G/26515/25
DATE; 6TH NOVRMBER, 2025.
DESCRIPTION; Borrowed_books.txt
*/


#include <stdio.h>

int main() {
    FILE *fptr;
    char title[50], day[50];
    int i, n;

    // Open file for writing
    fptr = fopen("Borrowed_books.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the number of books to record: ");
    scanf("%d", &n);
    getchar(); // clear newline character left by scanf

    for (i = 0; i < n; i++) {
        printf("\nBook %d Title: ", i + 1);
        gets(title);  // read book title

        printf("Day borrowed: ");
        gets(day);    // read day borrowed

        // Write to file
        fprintf(fptr, "Book %d\nTitle: %s\nDay Borrowed: %s\n\n", i + 1, title, day);
    }

    fclose(fptr);
    printf("\nBook details saved successfully in Borrowed_books.txt\n");

    // Reopen file for reading
    fptr = fopen("Borrowed_books.txt", "r");
    if (fptr == NULL) {
        printf("Error reading file!\n");
        return 1;
    }

    printf("\n--- Contents of Borrowed_books.txt ---\n");
    char ch;
    while ((ch = fgetc(fptr)) != EOF)
        putchar(ch);

    fclose(fptr);
    return 0;
}

