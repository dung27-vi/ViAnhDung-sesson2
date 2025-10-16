#include <stdio.h>

int main() {
    // Khai bao va khoi tao gia tri cho 3 bien
    int a = 10;
    int b = 5;
    float c = 3.5;

    // Tinh tong cua ca 3 so va luu vao mot bien kieu float
    float tong_float = a + b + c;

    // Tinh tong phan nguyen cua 3 so va luu vao mot bien kieu int
    int tong_int = a + b + (int)c;

    // In ket qua ra man hinh
    printf("Tong cua 3 so la: %.2f\n", tong_float);
    printf("Tong phan nguyen cua 3 so la: %d\n", tong_int);

    return 0;
}
