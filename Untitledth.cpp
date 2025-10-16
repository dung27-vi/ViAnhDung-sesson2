#include <stdio.h>
#include <math.h>

int main() {
    int a = 1, b = 2, c = 3;
    double S;
    
    // Tính toán bi?u th?c
    S = (pow(a, 2) + sqrt(pow(b, 2) + 4 * a * c)) / (2.0 * a) - (pow(b, 3) / pow(c, 2)) + sqrt(abs(a - b));
    
    // In k?t qu?
    printf("Ket qua cua bieu thuc S la: %lf\n", S);
    
    return 0;
}
