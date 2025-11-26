Programme 14: Find second largest element
#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50}, max=arr[0], secondMax=arr[0];
    for(int i=1; i<5; i++) {
        if(arr[i]>max) {
            secondMax=max;
            max=arr[i];
        } else if(arr[i]>secondMax && arr[i]!=max) {
            secondMax=arr[i];
        }
    }
    printf("Second largest = %d", secondMax);
    return 0;
}
