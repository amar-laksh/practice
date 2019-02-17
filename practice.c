#include "include/sorting.h"
#include <stdio.h>

#define PROJECT_NAME "practice"

int main(int argc, char** argv)
{
    if (argc != 1) {
	printf("%s takes no arguments.\n", argv[0]);
	return 1;
    }
    int arr[] = { 5, 2, 4, 6, 1, 3 };
    printf("Original array: ");
    Sort.print(arr);
    printf("\n");
    printf("INSERTION sort array: ");
    Sort.print(Sort.sort(arr, INSERTION));
    printf("SELECTION sort array: ");
    Sort.print(Sort.sort(arr, SELECTION));
    printf("MERGE sort array: ");
    Sort.print(Sort.sort(arr, MERGE));
    return 0;
}
