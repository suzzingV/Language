#include <stdio.h>
int main(void)
{
    int m, n, i, j;
    int arr[1000000] = { 0 };
    scanf_s("%d %d", &m, &n);

    for (i = 0; i <= n; i++)
        arr[i] = i;
    arr[1] = 0;
    for (i = 0; i <=n; i++)
    {
        if (arr[i] != 0)
        {
            for (j = 1; i + arr[i] * j <=n; j++)
                arr[i + arr[i] * j] = 0;
        }
    }
    for (i = m; i <= n; i++)
    {
        if (arr[i] != 0)
            printf("%d \n", arr[i]);
    }
    return 0;
}