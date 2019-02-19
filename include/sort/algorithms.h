#ifndef ALGORITHMS
#define ALGORITHMS 1

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
    int i = low - 1;
    int t = 0;
    for (int j = low; j <= high - 1; j++) {
	if (a[j] <= pivot) {
	    i += 1;
	    t = a[i];
	    a[i] = a[j];
	    a[j] = t;
	}
    }
    t = a[i + 1];
    a[i + 1] = a[high];
    a[high] = t;
    return (i + 1);
}

void _quick_rec(int a[], int low, int high)
{
    if (low < high) {
	int pivot = partition(a, low, high);
	_quick_rec(a, low, pivot - 1);
	_quick_rec(a, pivot + 1, high);
    }
}
void quick_sort(int a[], int len)
{
    _quick_rec(a, 0, len - 1);
}

void bubble_sort(int a[], int len)
{
}

void heap_sort(int a[], int len)
{
}

#endif /* ifndef ALGORITHMS */
