#include <stdio.h>

int isUppercase(char c) {
    return (c >= 'A' && c <= 'Z');
}


int main (int argc, char *argv[]) {

        char testchar = argv[1][0];
        if(isUppercase(testchar)) {
                printf("%c esta en mayuscula\n", testchar);
        } else {
                printf("%c no es una mayuscula\n", testchar);
        }

        return 0;
}
