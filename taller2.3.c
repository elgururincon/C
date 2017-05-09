#include <stdio.h>
#include <math.h>
int main ()
{
     int Array[8] = {2,4,61,76,3,2,1,76};
        int d = 4;
        int j = 0, k = 0, x = 0, i, z;

        for (z = 0; z < 8; z++)
        {
            printf ("%d ,", Array[z]);
        }
        printf ("\n");

        for (i = 0; i < 8; i++) {
            j++;
            k = j;

            while (k < 8) {

                int result = Array[i] - Array[k];
                int abs = fabs(result);
                if (abs == d) {
                    x++;
                    printf("%d . ", x);
                    printf(" La pareja cullo resultado es ");
                    printf("%d", d);
                    printf(" son ");
                    printf("%d", Array[i]);
                    printf(" - ");
                    printf("%d", Array[k]);
                    printf("\n");
                }
                k++;
            }

        }
        printf("\n");
return 0;
}
