#include <stdio.h>

void troca(int *pA, int *pB) {
    int temp = 0;
    temp = *pA;
    *pA = *pB;
    *pB = temp;
}

int main() {
    int A = 5, B = 7;
    
    printf("Antes da troca - A: %d, B: %d\n", A, B);
    
    troca(&A, &B);
    
    printf("Apos a troca  - A: %d, B: %d\n", A, B);
    
    return 0;
}