#ifndef SEARCH_ALGORITHMS
#define SEARCH_ALGORITHMS 1

int linear_search(int a[], int el, int len)
{
    int i;
    for (i = 0; i < len; i++) {
	if (el == a[i])
	    break;
    }
    return i;
}

int binary_search(int a[], int el, int len)
{
}

int interpolation_search(int a[], int el, int len)
{
}

int fibonacci_search(int a[], int el, int len)
{
}

#endif /* ifndef ALGORITHMS */
