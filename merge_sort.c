#include<stdio.h>
 
void mergeSort(int a[],int i,int j);
void merge(int a[],int i1,int j1,int i2,int j2);
 
int main()
{
    int a[30],n,i;
    printf("Tamaño del arreglo?");
    scanf("%d",&n);
    printf("numeros en el arreglo");
    
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        
    mergeSort(a,0,n-1);
    
    printf("\nArreglo ordenado :");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
        
    return 0;
}
 
void mergeSort(int a[],int i,int j)
{
    int mitad;
        
    if(i<j)
    {
        mitad=(i+j)/2;
        mergeSort(a,i,mitad);        
        mergeSort(a,mitad+1,j);    
        merge(a,i,mitad,mitad+1,j);    
    }
}
 
void merge(int a[],int i1,int j1,int i2,int j2)
{
    int temp[50];    
    int i,j,k;
    i=i1;    //inicio primera lsta
    j=i2;    //inicio segunda lista
    k=0;
    
    while(i<=j1 && j<=j2)  
    {
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }
    
    while(i<=j1)    //copia los elementos restantes de lista 1
        temp[k++]=a[i++];
        
    while(j<=j2)    //copia los elementos restantes de lista 2
        temp[k++]=a[j++];
        
    //trnasfiere los elementos de temp[] de vuelta a a[]
    for(i=i1,j=0;i<=j2;i++,j++)
        a[i]=temp[j];
}
