#include <stdio.h>

int main() {
    float f = 3.14f;
    double d = 3.1415926535;
    long double ld = 3.141592653589793238L;

    printf("Tipos reais em C:\n");
    printf("float: %.2f\n", f);
    printf("double: %.10lf\n", d);
    printf("long double: %.15Lf\n", ld);

    printf("\nTamanhos em bytes:\n");
    printf("float: %zu\n", sizeof(f));
    printf("double: %zu\n", sizeof(d));
    printf("long double: %zu\n", sizeof(ld));

    return 0;
}
