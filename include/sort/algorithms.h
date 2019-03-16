#ifndef SORT_ALGORITHMS
#define SORT_ALGORITHMS 1
#include "include/structures/heap/algorithms.h"
void insertion_sort(int a[], int len)
{
    int key = 0, j = 0;
    for (int i = 0; i < len; i++) {
	key = a[i];
	j = i - 1;
	while (j >= 0 && a[j] > key) {
	    a[j + 1] = a[j];
	    j -= 1;
	}
	a[j + 1] = key;
    }
}

void selection_sort(int a[], int len)
{
    int index = 0, s = 0;
    for (int i = 0; i < len; i++) {
	s = a[i];
	index = i;
	for (int j = i; j < len; j++) {
	    if (a[j] < s) {
		s = a[j];
		index = j;
	    }
	}
	a[index] = a[i];
	a[i] = s;
    }
}

void __merge(int a[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];
    for (int i = 0; i < n1; ++i) {
	L[i] = a[l + i];
    }

    for (int i = 0; i < n2; ++i) {
	R[i] = a[m + 1 + i];
    }

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
	if (L[i] <= R[j]) {
	    a[k] = L[i];
	    i++;
	} else {
	    a[k] = R[j];
	    j++;
	}
	k++;
    }
    while (i < n1) {
	a[k] = L[i];
	i++;
	k++;
    }
    while (i < n1) {
	a[k] = L[i];
	i++;
	k++;
    }
}

void __merge_rec(int a[], int l, int r)
{
    if (l < r) {
	int m = (l + r) / 2;
	__merge_rec(a, l, m);
	__merge_rec(a, m + 1, r);
	__merge(a, l, m, r);
    }
}

void merge_sort(int a[], int len)
{
    __merge_rec(a, 0, len - 1);
}

int partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = low;
    int t = 0;
    for (int j = low; j <= high - 1; j++) {
	if (a[j] <= pivot) {
	    t = a[i];
	    a[i] = a[j];
	    a[j] = t;
	    i += 1;
	}
    }
    t = a[i];
    a[i] = a[high];
    a[high] = t;
    return i;
}

void _quick_rec(int a[], int low, int high)
{
    if (low < high) {
	int pi = partition(a, low, high);
	_quick_rec(a, low, pi - 1);
	_quick_rec(a, pi + 1, high);
    }
}
void quick_sort(int a[], int len)
{
    _quick_rec(a, 0, len - 1);
}

void bubble_sort(int a[], int len)
{
    int t = 0;
    for (int i = 0; i < len - 1; i++) {
	for (int j = 0; j < len - i - 1; j++) {
	    if (a[j + 1] <= a[j]) {
		t = a[j + 1];
		a[j + 1] = a[j];
		a[j] = t;
	    }
	}
    }
}

void heap_sort(int a[], int len)
{

    for (int i = len / 2 - 1; i >= 0; i--)
	heapify(a, len, i, 1);
    for (int i = len - 1; i >= 0; i--) {
	int t = a[i];
	a[i] = a[0];
	a[0] = t;
	heapify(a, i, 0, 1);
    }
}

#endif /* ifndef ALGORITHMS */
