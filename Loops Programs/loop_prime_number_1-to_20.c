Programme 9:Check prime numbers from 1 to 20
  #include <stdio.h>
int main() {
    for(int i = 2; i <= 20; i++) {
        int flag = 0;
        for(int j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            printf("%d ", i);
    }
    return 0;
}
