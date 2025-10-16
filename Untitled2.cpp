#include <stdio.h>

int main() {
    // short: ki?u s? nguyên nh?, thý?ng có kích thý?c 2 byte, giá tr? t? -32,768 ð?n 32,767.
    short a = 10; 

    // int: ki?u s? nguyên, thý?ng có kích thý?c 2 ho?c 4 byte, tùy thu?c vào h? ði?u hành.
    int b = 200;

    // long: ki?u s? nguyên l?n, thý?ng có kích thý?c 4 byte trên h? ði?u hành 32 bit và 8 byte trên h? ði?u hành 64 bit.
    long c = 3000;

    // long long: ki?u s? nguyên r?t l?n, thý?ng có kích thý?c 8 byte.
    long long d = 40000;

    // unsigned short: ki?u s? nguyên không d?u nh?, giá tr? t? 0 ð?n 65,535.
    unsigned short e = 50000;

    // unsigned int: ki?u s? nguyên không d?u, giá tr? t? 0 ð?n 4,294,967,295 (trên h? 32 bit).
    unsigned int f = 600000;

    // unsigned long: ki?u s? nguyên không d?u l?n, giá tr? t? 0 ð?n 4,294,967,295 (trên h? 32 bit).
    unsigned long g = 70000000;

    // unsigned long long: ki?u s? nguyên không d?u r?t l?n, giá tr? t? 0 ð?n 18,446,744,073,709,551,615.
    unsigned long long h = 8000000000000000000ULL;

    // char: ki?u k? t?, có kích thý?c 1 byte, lýu tr? m?t k? t? ðõn.
    char i = 'Z';

    printf("Gia tri cac bien:\n");
    printf("short a = %d\n", a);
    printf("int b = %d\n", b);
    printf("long c = %ld\n", c);
    printf("long long d = %lld\n", d);
    printf("unsigned short e = %u\n", e);
    printf("unsigned int f = %u\n", f);
    printf("unsigned long g = %lu\n", g);
    printf("unsigned long long h = %llu\n", h);
    printf("char i = %c\n", i);
    
    return 0;
}

