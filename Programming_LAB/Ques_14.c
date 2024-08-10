#include <stdio.h>
#include <stdlib.h>

// Function to compare two integers for qsort
int compare(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a); // Sort in descending order
}

int main()
{
    int n;

    // Read the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Number of elements must be positive.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Read the elements
    printf("Enter %d distinct integers:\n", n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }

    // Sort the array in descending order
    qsort(arr, n, sizeof(int), compare);

    // Output the array
    printf("Output array:\n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free allocated memory
    free(arr);

    return 0;
}
