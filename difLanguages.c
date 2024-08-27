#include <stdio.h>

int main() {
    int i;
    printf("%s\t%s\t%s\n", "Decimal", "Octal", "Hexadecimal");

    for (i = 1; i <= 10; i++) {
        printf("%d\t%o\t%X\n", i, i, i);
    }

    return 0;
}

