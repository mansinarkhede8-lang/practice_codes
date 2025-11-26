Programme 7 :Copy array into another array
#include <stdio.h>
int main() {
    int arr1[5] = {1,2,3,4,5}, arr2[5];
    for(int i = 0; i < 5; i++) {
        arr2[i] = arr1[i];
    }
    printf("Copied array: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}
