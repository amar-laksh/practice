#ifndef HEAP_H
#define HEAP_H 1
#include "algorithms.h"
#include <math.h>
#include <stdio.h>

enum heap_algorithm {
    MAX_HEAP,
    MIN_HEAP
};
struct heap_t {
    void (*print)(int* a);
    int* (*create_heap)(int a[], enum heap_algorithm algo);
    size_t length;
    enum heap_algorithm algo;
};
struct heap_t Heap;

int* heap_fn(int a[], enum heap_algorithm algo)
{
    switch (algo) {
    case MAX_HEAP:
	make_max_heap(a, Heap.length);
	break;
    case MIN_HEAP:
	make_min_heap(a, Heap.length);
	break;
    default:
	printf("Sorry please choose from the available algorithms\n");
    }
    return a;
}

void heap_print_fn(int* a)
{
    int n = (int)Heap.length;
    int index;
    for (int i = 0; i < n / 2; i++) {
	for (int j = 0; j < (int)pow(2, i); j++) {
	    index = j + (int)pow(2, i) - 1;
	    if (index < n) {
		for (int s = (int)n / ((int)pow(2, i)); s > 0; s--) {
		    printf(" ");
		}
		printf("%d ", a[index]);
	    }
	}
	printf("\n\n");
    }
}

void init_heap()
{
    Heap.print = heap_print_fn;
    Heap.create_heap = heap_fn;
}

#endif /* ifndef HEAP_H */
