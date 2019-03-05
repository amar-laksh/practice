#ifndef SEARCHING
#define SEARCHING 1
#include "algorithms.h"
#include <stdio.h>
enum search_algorithm {
    LINEAR,
    BINARY,
    INTERPOLATION,
    FIBONACCI
};
struct searching_t {
    void (*print)(int* a);
    int* (*search)(int a[], int el, enum search_algorithm algo);
    size_t length;
    enum search_algorithm algo;
};

struct searching_t Search;

int* search_fn(int a[], int el, enum search_algorithm algo)
{
    switch (algo) {
    case LINEAR:
	selection_sort(a, Search.length);
	break;
    case BINARY:
	insertion_sort(a, Search.length);
	break;
    case INTERPOLATION:
	merge_sort(a, Search.length);
	break;
    case FIBONACCI:
	quick_sort(a, Search.length);
	break;
    default:
	printf("Sorry please choose from the available search algorithms\n");
    }
    return a;
}

void search_print_fn(int* a, int index)
{
    printf("Ihe search element: %d, and it's index is: %d\n", a[index], index);
}

void init_search()
{
    Search.print = search_print_fn;
    Search.search = search_fn;
}
#endif /* ifndef SEARCHING */
