#include <stdio.h>

int isUppercase(char c) {
    return (c >= 'a' && c <= 'z');
}


int main (int argc, char *argv[]) {

        char testchar = argv[1][0];
        if(isUppercase(testchar)) {
                printf("%c esta en minuscula\n", testchar);
        } else {
                printf("%c no es una minuscula\n", testchar);
        }

        return 0;
}

