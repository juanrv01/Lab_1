#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

        int numero = atoi(argv[1]);

        if (numero%2==0) {
                printf("El numero %d es par.\n",numero);
        }
        else {
                printf("El numero %d es impar.\n",numero);
        }

        return 0;
}
~                  