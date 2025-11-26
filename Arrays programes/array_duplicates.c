Programme 15:Find duplicate elements
#include <stdio.h>
int main() {
    int arr[6] = {1,2,3,2,4,1};
    printf("Duplicates: ");
    for(int i=0;i<6;i++) {
        for(int j=i+1;j<6;j++) {
            if(arr[i]==arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    return 0;
}

