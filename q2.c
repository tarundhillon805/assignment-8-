#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);

    // Copy string manually
    while (str1[i] != '\0') {
        if (str1[i] == '\n') {
            break;
        }
        str2[i] = str1[i];
        i++;
    }

    str2[i] = '\0';

    printf("Original string: %s\n", str1);
    printf("Copied string: %s\n", str2);

    return 0;
}