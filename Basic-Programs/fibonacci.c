Program 7 — Fibonacci Series
#include <stdio.h>
int main() {
    int n, a=0, b=1, c;
    printf("Enter number of terms: ");
    scanf("%d",&n);

    printf("Fibonacci Series: %d %d ",a,b);

    for(int i=3; i<=n; i++) {
        c = a + b;
        printf("%d ",c);
        a = b;
        b = c;
    }
    return 0;
}
