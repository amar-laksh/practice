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
	selection_sort(a, Sort.length);
	break;
    case INSERTION:
	insertion_sort(a, Sort.length);
	break;
    case MERGE:
	merge_sort(a, Sort.length);
	break;
    case QUICK:
	quick_sort(a, Sort.length);
	break;
    case BUBBLE:
	bubble_sort(a, Sort.length);
	break;
    case HEAP:
	heap_sort(a, Sort.length);
	break;
    default:
	printf("Sorry please choose from the available algorithms\n");
    }
    return a;
}

void sort_print_fn(int* a)
{
    printf("%d", a[0]);
    for (int i = 1; i < (int)Sort.length; ++i) {
	printf(", %d", *(a + i));
    }
    printf("\n");
}

void init_sort()
{
    Sort.print = sort_print_fn;
    Sort.sort = sort_fn;
}
#endif /* ifndef SORTING */
