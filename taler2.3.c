#include <stdio.h>
#include <stdbool.h>
int main ()
{
    int  A[7] = {3,3,1,5,5,7,7}
    int x;
        for (x = 0; x < 7; x++) {
            printf("%d ,",A[x]);
        }
        printf("\n");

        int j = 0;
        int k = 0;
        int i;
        char aux = 's';

        for (i = 0; i < 7; i++) {
            j++;
            k = j;
            bool cambio = true;

            while (k < 7) {

                if (A[i] == A[k]) {
                    cambio = false;
                    A[i] = aux;
                    A[k] = aux;
                    break;
                } else {

                }

                k++;
                if (cambio == true && k >= 7) {

                    printf("%d Es el numero que no se repite en el arreglo y se encuentra en el indice  ",A[i]);
                    printf("%d", i);
                } else {

                }
            }

        }

        printf("\n");
return 0;
}
