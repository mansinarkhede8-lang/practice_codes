Programee 2:Input 5 numbers from user and print
#include <stdio.h>
int main() {
    int arr[5];
    printf("Enter 5 numbers:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    printf("You entered: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
