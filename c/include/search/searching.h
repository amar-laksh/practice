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
    int* array;
    int (*search)(int a[], int el, enum search_algorithm algo);
    size_t length;
    enum search_algorithm algo;
};

struct searching_t Search;

int search_fn(int a[], int el, enum search_algorithm algo)
{
    int i;
    switch (algo) {
    case LINEAR:
	i = linear_search(a, el, Search.length);
	break;
    case BINARY:
	i = binary_search(a, el, Search.length);
	break;
    case INTERPOLATION:
	i = interpolation_search(a, el, Search.length);
	break;
    case FIBONACCI:
	i = fibonacci_search(a, el, Search.length);
	break;
    default:
	printf("Sorry please choose from the available search algorithms\n");
    }
    return i;
}

void search_print_fn(int index)
{
    printf("The search element: %d, and it's index is: %d\n", Search.array[index], index);
}

void init_search()
{
    Search.print = search_print_fn;
    Search.search = search_fn;
}
#endif /* ifndef SEARCHING */
