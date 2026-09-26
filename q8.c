#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch;
    char *result;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character
    str[strcspn(str, "\n")] = '\0';

    printf("Enter a character to search: ");
    scanf("%c", &ch);

    // Find first occurrence
    result = strchr(str, ch);

    if (result != NULL) {
        printf("Character '%c' found at position %ld.\n", ch, result - str + 1);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
}