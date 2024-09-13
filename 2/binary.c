#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    int n, key;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int *arr = malloc(n * sizeof(int));
    if (!arr) return 1; 
    
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    
    bubbleSort(arr, n);
    
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    
    printf("Enter element to search for: ");
    scanf("%d", &key);
    
    int index = binarySearch(arr, n, key);
    if (index != -1) printf("Element %d found at index %d.\n", key, index);
    else printf("Element %d not found.\n", key);
    
    free(arr);
    return 0;
}