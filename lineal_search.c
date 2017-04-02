#include <stdio.h>

int buscar, encontrado, i;
int a[20] = {3,4,6,2,3,4,3,5,3,2,3,2,3,2,5,7,9,23,124,54,3423,3423};
main(){
    printf("numero a buscar:");
    scanf("%d", &buscar);
    printf("Usted ingreso %d\n",buscar);
    encontrado = 0;
    for (i=0;i<20;i++)
    {
        if (a[i] == buscar)
        {
            encontrado =1;
        }
    }
    if(encontrado==1)
    {
        printf("Numero encontrado!");
    }
    else
    {
        printf("Numero no encontrado!\nLista de Numeros ");
        for (i=0; i<20; i++)
        {
            (i<3)?printf("%d, ",a[i]):printf("%d.",a[i]);
        }
    }
    getchar();
    return 0 ;
}
