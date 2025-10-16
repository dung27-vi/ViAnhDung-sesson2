#include <stdio.h>

int main() {
    // Khai bao va khoi tao gia tri cho cac bien
    int a = 5;
    int b = 10;
    int c = 3;
    int d = 2;
    int A;

    // Tinh gia tri cua bieu thuc
    A = a * b - 2 * c + 3 * (a - d);

    // Luu ket qua vao bien thich hop va in ra man hinh
    printf("Gia tri cua bieu thuc A = a*b - 2c + 3(a-d) la: %d\n", A);

    return 0;
}
