#ifndef SORTING
#define SORTING 1
#include "algorithms.h"
#include <stdio.h>
enum algorithm {
    SELECTION,
    INSERTION,
    QUICK,
    BUBBLE,
    HEAP,
    MERGE
};
struct sorting_t {
    void (*print)(int* a);
    int* (*sort)(int a[], enum algorithm algo);
    size_t length;
    enum algorithm algo;
};

struct sorting_t Sort;

int* sort_fn(int a[], enum algorithm algo)
{
    switch (algo) {
    case SELECTION:
	return selection_sort(a, Sort.length);
    case INSERTION:
	return insertion_sort(a, Sort.length);
    case MERGE:
	return merge_sort(a, Sort.length);
    case QUICK:
	return quick_sort(a, Sort.length);
    case BUBBLE:
	return bubble_sort(a, Sort.length);
    case HEAP:
	return heap_sort(a, Sort.length);
    default:
	printf("Sorry please choose from the available algorithms\n");
    }
    return 0;
}

void print_fn(int* a)
{
    printf("%d", a[0]);
    for (int i = 1; i < (int)Sort.length; ++i) {
	printf(", %d", *(a + i));
    }
    printf("\n");
}

void init_sort()
{
    Sort.print = print_fn;
    Sort.sort = sort_fn;
}
#endif /* ifndef SORTING */
