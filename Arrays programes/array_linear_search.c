Programme 10: Linear search in array
#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50}, key = 30;
    int found = 0;
    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    }
    if(found) printf("%d found in array", key);
    else printf("%d not found in array", key);
    return 0;
}
