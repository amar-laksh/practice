#ifndef SORTING
#define SORTING 1
#include <stdio.h>
enum algorithm {
    SELECTION,
    INSERTION,
    MERGE
};
struct sorting_t {
    void (*print)(int* a);
    int* (*sort)(int a[], enum algorithm algo);
    enum algorithm algo;
};

int* selection_sort(int a[])
{
    int key = 0, j = 0;
    for (int i = 0; i < 6; i++) {
	key = a[i];
	j = i - 1;
	while (j >= 0 && a[j] > key) {
	    a[j + 1] = a[j];
	    j -= 1;
	}
	a[j + 1] = key;
    }
    return a;
}

int* insertion_sort(int a[])
{
    return a;
}

int* merge_sort(int a[])
{
    return a;
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

void print_fn(int* a)
{
    printf("%d", a[0]);
    for (int i = 1; i < 6; ++i) {
	printf(", %d", *(a + i));
    }
    printf("\n");
}

struct sorting_t Sort = {
    .print = print_fn,
    .sort = sort_fn
};

#endif /* ifndef SORTING */
