#ifndef ALGORITHMS
#define ALGORITHMS 1

int* insertion_sort(int a[], int len)
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
    return a;
}

int* selection_sort(int a[], int len)
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
    return a;
}

int* merge_sort(int a[], int len)
{
    return a;
}

int* quick_sort(int a[], int len)
{
    int index = 0, pivot = 0;
    for (int i = 0; i < len; i++) {
    }
    return a;
}

int* bubble_sort(int a[], int len)
{
    return a;
}

int* heap_sort(int a[], int len)
{
    return a;
}

#endif /* ifndef ALGORITHMS */
