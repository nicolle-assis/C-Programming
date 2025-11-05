#include <stdio.h>

int main() {
    int a = -10;
    unsigned int b = 20;
    short c = 32767;
    long d = 1000000L;

    printf("Tipos inteiros em C:\n");
    printf("int: %d\n", a);
    printf("unsigned int: %u\n", b);
    printf("short: %hd\n", c);
    printf("long: %ld\n", d);

    printf("\nTamanhos em bytes:\n");
    printf("int: %zu\n", sizeof(a));
    printf("unsigned int: %zu\n", sizeof(b));
    printf("short: %zu\n", sizeof(c));
    printf("long: %zu\n", sizeof(d));

    return 0;
}
