#include <stdio.h>
 
int main() 
{
  int n, array[1000], i, j, aux;
 
  printf("tamaño del arreglo\n");
  scanf("%d", &n);
 
  printf("ingrese %d numeros\n", n);
 
  for (i = 0; i < n; i++) 
  {
    scanf("%d", &array[i]);
  }
 
  for (i = 1 ; i <= n - 1; i++)
  {
    j = i;
 
    while ( j > 0 && array[j] < array[j-1])
    {
      aux = array[j];
      array[j]   = array[j-1];
      array[j-1] = aux;
 
      j--;
    }
  }
 
  printf("Arreglo ordenado:\n");
 
  for (i = 0; i <= n - 1; i++)
  {
    printf("%d\n", array[i]);
  }
 
  return 0;
}
