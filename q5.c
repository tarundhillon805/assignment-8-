#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int frequency[256] = {0};
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = tolower(str[i]);
        frequency[(unsigned char)ch]++;
    }

    // Display each character only once
    printf("\nCharacter frequency:\n");

    for (i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            printf("%c = %d\n", i, frequency[i]);
        }
    }

    return 0;
}