Programee 4:Find largest element
#include <stdio.h>
int main() {
    int arr[5] = {10, 25, 5, 40, 30}, max = arr[0];
    for(int i = 1; i < 5; i++) {
        if(arr[i] > max) max = arr[i];
    }
    printf("Largest element = %d", max);
    return 0;
}
