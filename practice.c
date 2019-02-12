#include "include/sorting.h"
#include <stdio.h>

#define PROJECT_NAME "practice"

enum algorithm {
    SELECTION,
    INSERTION,
    MERGE
};

struct sorting {
    void (*print)(int* a);
    int* (*sort)(int a[], enum algorithm);
    enum algorithm algo;
};

void print_fn(int* a)
{
    printf("%d", a[0]);
    for (int i = 1; i < 6; ++i) {
	printf(", %d", *(a + i));
    }
    printf("\n");
}
int* sort_fn(int a[], enum algorithm algo)
{
    switch (algo) {
    case SELECTION:
	return selection_sort(a);
    case INSERTION:
	return insertion_sort(a);
    case MERGE:
	return merge_sort(a);
    default:
	printf("Sorry please choose from the available algorithms\n");
    }
    return 0;
}

struct sorting Sort = {
    .print = print_fn,
    .sort = sort_fn
};
int main(int argc, char** argv)
{
    if (argc != 1) {
	printf("%s takes no arguments.\n", argv[0]);
	return 1;
    }
    int arr[] = { 5, 2, 4, 6, 1, 3 };
    printf("Original array: ");
    print_fn(arr);
    printf("\n");
    printf("INSERTION sort array: ");
    Sort.print(Sort.sort(arr, INSERTION));
    printf("SELECTION sort array: ");
    Sort.print(Sort.sort(arr, SELECTION));
    printf("MERGE sort array: ");
    Sort.print(Sort.sort(arr, MERGE));
    return 0;
}
