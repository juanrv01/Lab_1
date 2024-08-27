#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
        if (argc != 2) {
                fprintf(stderr, "Uso: %s <numero>\n", argv[0]);
                return 1;
        }

        int ano = atoi(argv[1]);

        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
                printf("%d is a leap year\n", ano);
        } else {
                printf("%d is not a leap year\n", ano);
        }

        return 0;
}
