Programme 9:Sum of even and odd separately
#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5}, sumEven=0, sumOdd=0;
    for(int i = 0; i < 5; i++) {
        if(arr[i]%2==0) sumEven += arr[i];
        else sumOdd += arr[i];
    }
    printf("Sum Even = %d, Sum Odd = %d", sumEven, sumOdd);
    return 0;
}
