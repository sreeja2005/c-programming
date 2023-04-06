#include <stdio.h>

int main() {
    int num, binary = 0, base = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    while (num > 0) {
        binary += (num % 2) * base;
        num /= 2;
        base *= 10;
    }

    printf("Binary number: %d\n", binary);

    return 0;
}

