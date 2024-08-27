#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
        if (argc !=2)
        {
                fprintf(stderr, "Uso: %s <numero>\n", argv[0]);
                return 1;
        }

        int numero = atoi(argv[1]);
        int i,resultado = 0, aux = numero;

        for(i=numero-1; i >=1; i--)
        {
                aux = aux*i;
        }

        resultado = aux;

        printf("el factorial de %d es %d\n", numero,resultado);

        return 0;
}
