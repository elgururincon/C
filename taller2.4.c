#include<stdio.h>
int main()
{
    int Array [5] = {2,8,45,98,5};
    int j = 0;
    int result;
    int i;
    for (i = 0; i < 5; i++)
    {
        j++;
        int k = j;
        while (k < 5)
        {
            if (Array[k] > Array[i])
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
