Programme 5- Factorial of a number (5)
  #include <stdio.h>

int main() {
    int i, fact = 1, n = 5;
    for(i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("Factorial of %d is %d", n, fact);
    return 0;
}
