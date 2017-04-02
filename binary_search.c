#include <stdio.h>
 
int main()
{
   int c, inf, sup, mitad, n, buscar, array[100];
 
   printf("tamaño del arreglo\n");
   scanf("%d",&n);
 
   printf("ingrese %d numeros\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d",&array[c]);
 
   printf("Enumero a buscar?\n");
   scanf("%d", & buscar);
 
   inf = 0;
   sup = n - 1;
   mitad = (inf+sup)/2;
 
   while (inf <= sup) 
   {
      if (array[mitad] < buscar)
         inf = mitad + 1;    
      
      else if (array[mitad] == buscar) 
      {
         printf("%d encontrado en el indice %d.\n", buscar, mitad + 1);
         break;
      }
      else
         sup = mitad - 1;
 
      mitad = (inf + sup)/2;
   }
   if (inf > sup)
      printf("No encontrado! %d no esta en el arreglo .\n", buscar);
 
   return 0;   
}
