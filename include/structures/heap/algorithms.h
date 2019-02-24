#ifndef ALGORITHMS_HEAP
#define ALGORITHMS_HEAP 1

void heapify(int a[], int n, int i, int flag)
{
    int tag = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n) {
	switch (flag) {
	case 1:
	    if (a[left] > a[tag])
		tag = left;
	    break;
	case 0:
	    if (a[left] < a[tag])
		tag = left;
	}
    }

    if (right < n) {

	switch (flag) {
	case 1:
	    if (a[right] > a[tag])
		tag = right;
	    break;
	case 0:
	    if (a[right] < a[tag])
		tag = right;
	}
    }

    if (tag != i) {
	int t = a[i];
	a[i] = a[tag];
	a[tag] = t;
	heapify(a, n, tag, flag);
    }
}

void make_max_heap(int a[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
	heapify(a, n, i, 1);
}

void make_min_heap(int a[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
	heapify(a, n, i, 0);
}
void push_heap(int a[], int f, int l)
{
}

void pop_heap(int a[], int el)
{
}

void pop_min(int a[], int el)
{
}

void pop_max(int a[], int el)
{
}
#endif /* ifndef ALGORITHMS_HEAP */
