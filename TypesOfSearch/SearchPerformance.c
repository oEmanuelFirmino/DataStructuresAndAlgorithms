#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

long *fillArray(long size)
{
    long *numbers = (long *)malloc(size * sizeof(long));
    if (numbers == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    for (long i = 0; i < size; i++)
    {
        numbers[i] = i + 1;
    }

    return numbers;
}

long binarySearch(long size, long *array, long target, long *operations)
{
    long start = 0;
    long end = size - 1;
    long middle;

    *operations = 0;

    while (start <= end)
    {
        middle = (start + end) / 2;
        (*operations)++;

        if (array[middle] == target)
        {
            return middle;
        }
        else if (array[middle] < target)
        {
            start = middle + 1;
        }
        else
        {
            end = middle - 1;
        }
    }

    return -1;
}

long *linearSearch(long size, long *array, long target, long *foundCount, long *operations)
{
    long *positions = (long *)malloc(size * sizeof(long));
    long count = 0;

    *operations = 0;

    for (long i = 0; i < size; i++)
    {
        (*operations)++;

        if (array[i] == target)
        {
            positions[count] = i;
            count++;
        }
    }

    if (count == 0)
    {
        free(positions);
        *foundCount = 0;
        return NULL;
    }

    positions = (long *)realloc(positions, count * sizeof(long));
    *foundCount = count;
    return positions;
}

long exponentialSearch(long *array, long size, long target, long *operations)
{
    *operations = 0;
    if (array[0] == target)
        return 0;

    long i = 1;
    while (i < size && array[i] <= target)
    {
        (*operations)++;
        i = i * 2;
    }

    long start = i / 2;
    long end = (i < size) ? i : size - 1;

    long result = binarySearch(end - start + 1, array + start, target, operations);
    return (result == -1) ? -1 : result + start;
}

long jumpSearch(long *array, long size, long target, long *operations)
{
    *operations = 0;
    long step = (long)sqrt(size);
    long prev = 0;

    while (array[prev] < target && prev < size)
    {
        (*operations)++;
        prev = prev + step;
    }

    for (long i = prev - step; i < prev && i < size; i++)
    {
        (*operations)++;
        if (array[i] == target)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    long size, target;

    printf("====================================\n");
    printf("   Array Search Program\n");
    printf("====================================\n");

    printf("Enter the size of the array: ");
    scanf("%ld", &size);
    printf("Enter the number to search for: ");
    scanf("%ld", &target);

    long *array = fillArray(size);

    long binarySearchOperations = 0;
    clock_t start = clock();
    long binarySearchPosition = binarySearch(size, array, target, &binarySearchOperations);
    clock_t end = clock();

    printf("\n====================================\n");
    if (binarySearchPosition != -1)
    {
        printf("Binary Search: The number %ld was found at position %ld.\n", target, binarySearchPosition);
    }
    else
    {
        printf("Binary Search: The number %ld was not found.\n", target);
    }

    double executionTime = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Execution Time (Binary Search): %.6f seconds\n", executionTime);
    printf("Operations performed (Binary Search): %ld comparisons\n", binarySearchOperations);

    long foundCount;
    long linearSearchOperations = 0;
    start = clock();
    long *linearSearchPositions = linearSearch(size, array, target, &foundCount, &linearSearchOperations);
    end = clock();

    printf("\n====================================\n");
    if (linearSearchPositions != NULL)
    {
        printf("Linear Search: The number %ld was found at positions: ", target);
        for (long i = 0; i < foundCount; i++)
        {
            printf("%ld ", linearSearchPositions[i]);
        }
        printf("\n");
        free(linearSearchPositions);
    }
    else
    {
        printf("Linear Search: The number %ld was not found.\n", target);
    }

    executionTime = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Execution Time (Linear Search): %.6f seconds\n", executionTime);
    printf("Operations performed (Linear Search): %ld comparisons\n", linearSearchOperations);

    long exponentialSearchPosition = 0;
    long exponentialSearchOperations = 0;
    start = clock();
    exponentialSearchPosition = exponentialSearch(array, size, target, &exponentialSearchOperations);
    end = clock();

    printf("\n====================================\n");
    if (exponentialSearchPosition != -1)
    {
        printf("Exponential Search: The number %ld was found at position %ld.\n", target, exponentialSearchPosition);
    }
    else
    {
        printf("Exponential Search: The number %ld was not found.\n", target);
    }

    executionTime = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Execution Time (Exponential Search): %.6f seconds\n", executionTime);
    printf("Operations performed (Exponential Search): %ld comparisons\n", exponentialSearchOperations);

    long jumpSearchPosition = 0;
    long jumpSearchOperations = 0;
    start = clock();
    jumpSearchPosition = jumpSearch(array, size, target, &jumpSearchOperations);
    end = clock();

    printf("\n====================================\n");
    if (jumpSearchPosition != -1)
    {
        printf("Jump Search: The number %ld was found at position %ld.\n", target, jumpSearchPosition);
    }
    else
    {
        printf("Jump Search: The number %ld was not found.\n", target);
    }

    executionTime = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Execution Time (Jump Search): %.6f seconds\n", executionTime);
    printf("Operations performed (Jump Search): %ld comparisons\n", jumpSearchOperations);

    free(array);
    return 0;
}
