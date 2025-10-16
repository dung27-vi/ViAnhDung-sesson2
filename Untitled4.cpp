#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    int sum, difference, product;
    float quotient;

    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = (float)a / b;

    printf("Tong cua hai so la: %d\n", sum);
    printf("Hieu cua hai so la: %d\n", difference);
    printf("Tich cua hai so la: %d\n", product);
    printf("Thuong cua hai so la: %.2f\n", quotient);

    return 0;
}
