#include <stdio.h>

int main() {
    int n, i, j, temp;
    int arr[100], key;
    int low, high, mid;
    int found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort (to sort the array)
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nSorted Array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nEnter the element to search: ");
    scanf("%d", &key);

    // Binary Search (Divide and Conquer)
    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            found = 1;
            break;
        }
        else if(key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if(found)
        printf("Element %d found at position %d.\n", key, mid + 1);
    else
        printf("Element not found.\n");

    return 0;
}