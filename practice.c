#include "include/sort/sorting.h"
#include <stdio.h>
#include <string.h>

#define PROJECT_NAME "practice"

int main(int argc, char** argv)
{
    if (argc != 1) {
	printf("%s takes no arguments.\n", argv[0]);
	return 1;
    }
    int arr[] = { 5, 2, 4, 6, 1, 3 };
    int tmp[6];
    init_sort();
    Sort.length = 6;
    printf("Original array: ");
    Sort.print(arr);
    printf("\n");
    printf("INSERTION sort array: ");
    memcpy(tmp, arr, sizeof(arr));
    Sort.print(Sort.sort(tmp, INSERTION));

    printf("SELECTION sort array: ");
    memcpy(tmp, arr, sizeof(arr));
    Sort.print(Sort.sort(tmp, SELECTION));

    printf("MERGE sort array: ");
    memcpy(tmp, arr, sizeof(arr));
    Sort.print(Sort.sort(tmp, MERGE));

    printf("QUICK sort array: ");
    memcpy(tmp, arr, sizeof(arr));
    Sort.print(Sort.sort(tmp, QUICK));

    printf("HEAP sort array: ");
    memcpy(tmp, arr, sizeof(arr));
    Sort.print(Sort.sort(tmp, HEAP));

    printf("BUBBLE sort array: ");
    memcpy(tmp, arr, sizeof(arr));
    Sort.print(Sort.sort(tmp, BUBBLE));
    return 0;
}
