

int main() {
    int decimalNumber;

    // User theke ekta decimal number input nibo
    printf("Ekta decimal number dao: ");
    scanf("%d", &decimalNumber);

    // Decimal to octal conversion
    int quotient, remainder, octalNumber = 0, i = 1;

    quotient = decimalNumber;

    while (quotient != 0) {
        remainder = quotient % 8;
        printf("Remainder= %d\n",remainder);
        octalNumber += remainder * i;
        printf("Octal number= %d\n ",octalNumber);
        quotient /= 8;
        i *= 10;
    }

    // Original decimal number o tar octal equivalent print korbo
    printf("Tomar decimal number: %d\n", decimalNumber);
    printf("Octal equivalent: %d\n", octalNumber);

    return 0;
}


















