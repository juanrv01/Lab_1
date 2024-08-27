#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool esPrimo(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
        int i;
    for ( i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {

        printf("Ingrese la funcion que desea usar\n");
        printf("1. Determinar si es primo\n2. Determinar cuales son primos\n3. Determinar los primos entre un rango\n");
        int opcion,num,bot,top,iterador;
        int cadena[100];
        int longitud;

        scanf("%d", &opcion);

        switch (opcion) {

        case 1:
                printf("Ingrese el numero: ");
                scanf("%d",&num);
                if (esPrimo(num)) {
                        printf("El numero %d es primo\n",num);
                } else {
                        printf("El numero %d no es primo\n",num);
                }
                break;
        case 2:
                printf("Ingrese la cantidad de numeros que desea evaluar (Max 100)\n");
                scanf("%d",&longitud);
                longitud= longitud- 1;
                printf("Ingrese los numeros que desea evaluar:\n");
                for(iterador = 0; iterador<=longitud;iterador++) {
                        scanf("%d",&cadena[iterador]);
                }

                for(iterador = 0; iterador<=longitud;iterador++) {
                        num = cadena[iterador];
                        if (esPrimo(num)) {
                                printf("El numero %d es primo\n",num);
                        } else {
                                printf("El numero %d no es primo\n",num);
                        }
                }

                break;

        case 3:

                printf("Ingrese el rango que desea determinar (Separados por un espacio):\n");
                scanf("%d %d",&bot,&top);
                printf("Los primos entre %d %d son:\n",bot,top);
                for(iterador = bot; iterador<=top;iterador++) {
                        num = iterador;
                        if (esPrimo(num)) {
                                printf("%d\n",num);
                        }
                }


                break;

        };

        return 0;

}

