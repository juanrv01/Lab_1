#include <stdio.h>
#include <stdlib.h>

int power (int base, int exponent)
{
        if(exponent == 0 )
                return 1;

        return base * power(base, exponent - 1);
}

int main(int argc, char *argv[])
{
        int base = atoi(argv[1]);
        int exponente = atoi(argv[2]);
        int resultado = power(base,exponente);
        printf("El resultado de elevar la base %d al exponente %d da como resultado %d\n",base,exponente,resultado);
        return 0;
}
