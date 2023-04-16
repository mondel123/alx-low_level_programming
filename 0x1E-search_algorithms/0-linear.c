#include <stdio.h>

int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }
    
    for (size_t i = 0; i < size; i++) {
        printf("Comparing with value at index %ld: %d\n", i, array[i]);
        if (array[i] == value) {
            return i;
        }
    }
    
    return -1;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 3;
    
    int index = linear_search(arr, size, value);
    if (index == -1) {
        printf("Value %d not found in the array\n", value);
    } else {
        printf("Value %d found at index %d\n", value, index);
    }
    
    return 0;
}
