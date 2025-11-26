Programme 11:Sum of odd numbers from 1 to 20
#include <stdio.h>
int main() {
    int sum = 0;
    for(int i = 1; i <= 20; i += 2) {
        sum += i;
    }
    printf("Sum of odd numbers = %d", sum);
    return 0;
}
