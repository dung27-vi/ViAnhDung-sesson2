#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a = 3;
    int b = 4;
    int c = 2;
    float S;

    S = (sqrt(a*a + b*b) / (c + 1)) + ((float)a * b / c) - sqrt(abs(a - b) + c*c);

    printf("S = %.2f\n", S);

    return 0;
}
