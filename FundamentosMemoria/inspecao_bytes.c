#include <stdio.h>

int main() {
    int a = 1025; // Exemplo com número que ocupa mais de 1 byte para inspeção 
    int *pa = &a; 
    
    if (pa != NULL) {
        printf("Notacao vetor: %d | Notacao ponteiro: %d\n", pa[0], *pa);
    }
    
    // Casting para inspecionar byte a byte da memória 
    unsigned char *pb = (unsigned char*)pa;
    
    printf("Byte 0: %d\n", pb[0]);
    printf("Byte 1: %d\n", pb[1]);
    printf("Byte 2: %d\n", pb[2]);
    printf("Byte 3: %d\n", pb[3]);
    
    // Zera a memória manualmente
    *(pb + 0) = 0;
    *(pb + 1) = 0;
    *(pb + 2) = 0;
    *(pb + 3) = 0;
    
    return 0;
}