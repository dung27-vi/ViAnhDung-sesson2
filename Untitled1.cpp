#include <stdio.h>

int main() {
    int number = 12345;
    int sum = 0;
    int temp = number;

    while (temp > 0) {
        int digit = temp % 10;
        sum += digit;
        temp /= 10;
    }

    printf("Tong cac chu so cua so %d la: %d\n", number, sum);

    return 0;
}

