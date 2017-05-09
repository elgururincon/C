#include <stdio.h>
int main ()
{

        int A[5] = {10, 4, 1, 6, 2};
        int B[5] = {0, 0, 0, 0, 0};
        int w ;

        for (w = 0; w < 5; w++) {

            printf("%d ,",A[w]);
        }

       printf("\n");

        int aux = - 1;
        int x = -1;
        int i, j;

        for ( i = 0; i < 5 ; i++) {
            int prod = 1;
            aux++;
            for (j = 0; j < 5; j++) {

                if (j != aux) {

                    prod = A[j] * prod;
                } else {

                }

            }

            x++;
            B[x] = prod;

        }

        int k;
        for (k = 0; k < 5; k++) {

            printf("%d ,", B[k]);

        }

        printf("\n");



    return 0;
}
