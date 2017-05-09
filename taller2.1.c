#include<stdio.h>
int main()
{
    int Array [5] = {3,7,32,45,2,46,42,1};
    int j = 0;
    int result;
    int i;
    for (i = 0; i < 5; i++)
    {
        j++;
        int k = j;
        while (k < 5)
        {
            if (Array[i] != Array[k])
            {
                result = Array[i] - Array[k];
                printf("%d ,", result);
            }
            k++;
        }
        printf("\n");
    }
    return 0;
}
