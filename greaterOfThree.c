#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

        int no1 = atoi(argv[1]);
        int no2 = atoi(argv[2]);
        int no3 = atoi(argv[3]);
        int bigger;

        if(no1>no2) {
                bigger=no1;
        } else {
                bigger=no2;
        }
        if(bigger<no3) {
                bigger=no3;
        }


        printf("El numero mas grande es %d\n",bigger);
        return 0;
}
