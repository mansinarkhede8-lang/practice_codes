Programme 5:Find smallest element
#include <stdio.h>
int main() {
    int arr[5] = {10, 25, 5, 40, 30}, min = arr[0];
    for(int i = 1; i < 5; i++) {
        if(arr[i] < min) min = arr[i];
    }
    printf("Smallest element = %d", min);
    return 0;
}
