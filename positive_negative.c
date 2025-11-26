Program 2 — Check Positive or Negative
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n > 0)
        printf("Positive number");
    else if(n < 0)
        printf("Negative number");
    else
        printf("Zero");

    return 0;
}
