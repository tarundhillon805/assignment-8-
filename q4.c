#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, length = 0, palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find the length of the string
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Compare characters from both ends
    for (i = 0; i < length / 2; i++) {
        if (tolower(str[i]) != tolower(str[length - 1 - i])) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}