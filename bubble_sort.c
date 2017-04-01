#include<stdio.h>
 
int main()
{
    int a[50],n,i,j,aux;
    printf("tamaño del arreglo?");
    scanf("%d",&n);
    printf("numeros del arreglo?");
    
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
        
    for(i=1;i<n;++i)
        for(j=0;j<(n-i);++j)
            if(a[j]>a[j+1])
            {
                aux=a[j];
                a[j]=a[j+1];
                a[j+1]=aux;
            }
            
    for(i=0;i<n;++i)
        printf("%d ",a[i]);
 
    return 0;
}
