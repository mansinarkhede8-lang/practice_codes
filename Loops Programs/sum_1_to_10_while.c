Programee 14: Sum of first N natural numbers (N = 10) using while loop
#include <stdio.h>
int main() {
    int i = 1, sum = 0;
    while(i <= 10) {
        sum += i;
        i++;
    }
    printf("Sum = %d", sum);
    return 0;
}
