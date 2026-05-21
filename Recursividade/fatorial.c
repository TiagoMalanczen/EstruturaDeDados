#include <stdio.h>

unsigned long int fatorial(unsigned long int n) {
    // Caso Base: A entrada mais simples possível com resultado conhecido
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fatorial(n - 1);
}

int main() {
    unsigned long int num = 5;
    printf("Fatorial de %lu = %lu\n", num, fatorial(num));
    return 0;
}