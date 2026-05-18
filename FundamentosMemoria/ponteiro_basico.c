#include <stdio.h>

int main() {
    int a = 2;
    int *p = &a;

    printf("Valor inicial de a: %d\n", a);

    *p = 77;

    printf("Valor de a apos modificacao por *p: %d\n", a);

    return 0;
}