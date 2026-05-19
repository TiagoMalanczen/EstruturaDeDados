#include <stdio.h>

int buscaSequencialRec(int v[], int ini, int fim, int k) {
    
    if (ini > fim) {
        return -1;
    }
    
    if (v[ini] == k) {
        return ini;
    }
    
    return buscaSequencialRec(v, ini + 1, fim, k);
}

int main() {
    int v[5] = {12, 45, 7, 9, 23};
    int n = 5;
    int chave = 9;
    
    int indice = buscaSequencialRec(v, 0, n - 1, chave);
    
    if (indice != -1) {
        printf("Busca Sequencial: Chave %d encontrada no indice %d.\n", chave, indice);
    } else {
        printf("Busca Sequencial: Chave %d nao encontrada.\n", chave);
    }
    
    return 0;
}