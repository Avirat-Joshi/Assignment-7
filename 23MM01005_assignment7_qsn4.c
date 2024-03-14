#include <stdio.h>
#include <string.h>
int maximum(int a[], int max, int i, int n)
{
    if (i == n)
        return max;
    if (max < a[i])
        maximum(a, a[i], i + 1, n);
    else
        maximum(a, max, i + 1, n);
}
int main()
{
    int n;
    printf("Enter number of elements of an array ");
    scanf("%d", &n);
    printf("Enter elements of an array ");
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    if (n != 0)
        printf("Maximum is %d", maximum(a, a[0], 0, n));
    return 0;
}