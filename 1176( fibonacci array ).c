#include<stdio.h>

int main()
{
   long long int n, primero = 0, segundo = 1, siguiente, c;
   int i,j;
   scanf("%d", &j);
   for(i=1; i<=j; i++, primero = 0, segundo = 1)
   {
       scanf("%lld",&n);
       n=n+1;
       for ( c = 0 ; c < n ; c++ )
       {
          if (c <= 1) siguiente = c;
          else
          {
             siguiente = primero + segundo;
             primero = segundo;
             segundo = siguiente;
          }
       }
          printf("Fib(%lld) = %lld\n",n-1,siguiente);
   }
   return 0;
}
