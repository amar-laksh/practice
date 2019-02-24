#include "include/sort/sorting.h"
#include "include/structures/heap/heap.h"
#include <stdio.h>
#include <string.h>

#define PROJECT_NAME "practice"

int main(int argc, char** argv)
{
    if (argc != 1) {
	printf("%s takes no arguments.\n", argv[0]);
	return 1;
    }
    int arr[] = { 52, 5, 2, 4, 6, 41, 1, 3, 12 };
    int tmp[9];
    init_sort();
    Sort.length = 9;
    printf("--------------\nPractice tests:\n");
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

    printf("\n\n\n");
    init_heap();
    Heap.length = 9;
    printf("Original Heap:\n");
    Heap.print(arr);
    printf("MAX Heap:\n");
    Heap.print(Heap.create_heap(arr, MAX_HEAP));
    printf("MIN Heap:\n");
    Heap.print(Heap.create_heap(arr, MIN_HEAP));
    return 0;
}
