#include <stdio.h>

void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[i + l];
    }
    for (int i = 0; i < n2; i++)
    {
        R[i] = arr[m + i + 1];
    }
    int pleft = 0;
    int pright = 0;
    int cc = l;

    while (pleft < n1 && pright < n2)
    {
        if (L[pleft] <= R[pright])
        {
            arr[cc] = L[pleft];
            pleft++;
        }
        else
        {
            arr[cc] = R[pright];
            pright++;
        }
        cc++;
    }
    while (pleft < n1)
    {
        arr[cc] = L[pleft];
        pleft++;
        cc++;
    }
    while (pright < n2)
    {
        arr[cc] = R[pright];
        pright++;
        cc++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m =(r + l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

int main()
{
    int n;
    printf("Enter Size of Array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("ARRAY AFTER SORTING:::\n");

    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}