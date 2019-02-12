#include "include/sorting.h"
#include <stdio.h>

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
