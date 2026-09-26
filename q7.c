#include <stdio.h>
#include <string.h>

int main() {
    char firstName[50], lastName[50], fullName[100];

    printf("Enter first name: ");
    fgets(firstName, sizeof(firstName), stdin);

    printf("Enter last name: ");
    fgets(lastName, sizeof(lastName), stdin);

    // Remove newline characters
    firstName[strcspn(firstName, "\n")] = '\0';
    lastName[strcspn(lastName, "\n")] = '\0';

    // Copy first name to full name
    strcpy(fullName, firstName);

    // Add a space
    strcat(fullName, " ");

    // Add last name
    strcat(fullName, lastName);

    printf("\nComplete name: %s\n", fullName);

    return 0;
}