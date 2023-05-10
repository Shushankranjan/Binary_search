#include <stdio.h>
#define max 100
int Bsearch(int[], int, int, int);

int main()
{
    int A[max], i, n, key, f = 0;
    printf("Enter size\n");
    scanf("%d", &n);
    printf("Enter elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Enter key\n");
    scanf("%d", &key);
    f = Bsearch(A, 0, n - 1, key);
    if (f == 1)
    {
        printf("Found\n");
    }
    else
    {
        printf("Not found\n");
    }
    return 0;
}

int Bsearch(int A[], int Lb, int Ub, int key)
{
    int mid = 0;
    while (Lb <= Ub)
    {
        mid = (Lb + Ub) / 2;
        if (key == A[mid])
        {
            return 1;
        }
        else if (A[mid] > key)
        {
            Ub = mid - 1;
        }
        else
        {
            Lb = mid + 1;
        }
    }
}