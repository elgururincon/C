
#include <stdio.h>


void qs(int array[],int lesser,int greater)
{
  int less,great,temporal,pivot;
  
  less=lesser;
  great = greater;
  pivot = array[(less+great)/2];

  do
  {
    while(array[less]<pivot && less<greater)less++;
    while(pivot<array[great] && great > lesser)great--;
    if(less <= great)
    {
      temporal= array[less];
      array[less]=array[great];
      array[great]=temporal;
      less++;
      great--;
    }
 }while(less<=great);
    if(lesser<great){qs(array,lesser,great);}
    if(greater>less){qs(array,less,greater);}
}
 
void quicksort(int array[],int n)
{
    qs(array,0,n-1);
}
 
int main(int argc, const char * argv[])

{
    int array[] ={100,56,0,1,-45,2,46,5,9,6,67,23,5};
    int size = sizeof(array)/sizeof(int);

    printf("Lista Desordenada \n");
    for (int i=0; i<size; i++)
    {
      printf("%d",array[i]);
      if(i<size-1)
        printf(",");
    }
 
    printf("\n");
    quicksort(array,size);
    
    printf("Lista Ordenada \n");
    for (int i=0; i<size; i++) 
    {
        printf("%d",array[i]);
        if(i<size-1)
            printf(",");
    }
    return 0;
}
