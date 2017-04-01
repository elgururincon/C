#include <stdio.h>

int main()
{
    char empleado;
    double salario,venta,total;
    scanf("%s %lf %lf",&empleado,&salario,&venta);
    total=salario+(venta*15)/100;
    printf("TOTAL = R$ %.2f\n",total);
    return 0;
}
