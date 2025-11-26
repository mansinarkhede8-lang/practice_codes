Progmramme 11: Reverse array in-place
#include <stdio.h>
int main() {
    int arr[5] = {1,2,3,4,5}, temp;
    for(int i = 0; i < 5/2; i++) {
        temp = arr[i];
        arr[i] = arr[4-i];
        arr[4-i] = temp;
    }
    for(int i = 0; i < 5; i++) printf("%d ", arr[i]);
    return 0;
}
  
