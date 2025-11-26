Programme 8:Count even and odd numbers
#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5}, even=0, odd=0;
    for(int i = 0; i < 5; i++) {
        if(arr[i]%2==0) even++;
        else odd++;
    }
    printf("Even = %d, Odd = %d", even, odd);
    return 0;
}
