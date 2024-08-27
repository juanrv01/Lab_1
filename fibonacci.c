#include <stdio.h>
#include "common.h"

int main() {

        int a=0,x=1,y=1;

        while (a!=10) {
                printf("%d\n",x);
                y = y + x;
                Spin(0.5);
                printf("%d\n",y);
                x = x + y;
                a++;
        }

        return 0;

}
