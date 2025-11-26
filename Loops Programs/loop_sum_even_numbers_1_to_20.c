Programee 10:Sum of even numbers from 1 to 20
  #include <stdio.h>
int main() {
    int sum = 0;
    for(int i = 2; i <= 20; i += 2) {
        sum += i;
    }
    printf("Sum of even numbers = %d", sum);
    return 0;
}
