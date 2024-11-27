#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int digits = 0, spaces = 0;

    // Input a string
    printf("Enter a line of numbers and spaces: ");
    fgets(str, sizeof(str), stdin);

    // Count digits and spaces
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if (str[i] == ' ') {
            spaces++;
        }
    }

    // Display the counts
    printf("Number of digits: %d\n", digits);
    printf("Number of spaces: %d\n", spaces);

    return 0;
}
