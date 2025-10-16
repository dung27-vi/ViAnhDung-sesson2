#include <stdio.h>

int main() {
    // short: ki?u s? nguy�n nh?, th�?ng c� k�ch th�?c 2 byte, gi� tr? t? -32,768 �?n 32,767.
    short a = 10; 

    // int: ki?u s? nguy�n, th�?ng c� k�ch th�?c 2 ho?c 4 byte, t�y thu?c v�o h? �i?u h�nh.
    int b = 200;

    // long: ki?u s? nguy�n l?n, th�?ng c� k�ch th�?c 4 byte tr�n h? �i?u h�nh 32 bit v� 8 byte tr�n h? �i?u h�nh 64 bit.
    long c = 3000;

    // long long: ki?u s? nguy�n r?t l?n, th�?ng c� k�ch th�?c 8 byte.
    long long d = 40000;

    // unsigned short: ki?u s? nguy�n kh�ng d?u nh?, gi� tr? t? 0 �?n 65,535.
    unsigned short e = 50000;

    // unsigned int: ki?u s? nguy�n kh�ng d?u, gi� tr? t? 0 �?n 4,294,967,295 (tr�n h? 32 bit).
    unsigned int f = 600000;

    // unsigned long: ki?u s? nguy�n kh�ng d?u l?n, gi� tr? t? 0 �?n 4,294,967,295 (tr�n h? 32 bit).
    unsigned long g = 70000000;

    // unsigned long long: ki?u s? nguy�n kh�ng d?u r?t l?n, gi� tr? t? 0 �?n 18,446,744,073,709,551,615.
    unsigned long long h = 8000000000000000000ULL;

    // char: ki?u k? t?, c� k�ch th�?c 1 byte, l�u tr? m?t k? t? ��n.
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

