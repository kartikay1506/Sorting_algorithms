#include <stdio.h>
int main()
{
    int n, i, key, j;
    scanf("%d", &n);
    int ar[n];
    for (i = 0; i < n; i++)
        scanf("%d", (ar + i));

    for (i = 1; i < n; i++)
    {
        key = ar[i];
        j = i - 1;
        while (j >= 0 && ar[j] > key)
        {
            ar[j + 1] = ar[j];
            j--;
        }
        ar[j + 1] = key;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", *(ar + i));
    return 0;
} 
