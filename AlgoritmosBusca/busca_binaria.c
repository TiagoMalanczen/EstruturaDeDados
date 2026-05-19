#include <stdio.h>

int buscaBinaria(int v[], int ini, int fim, int k) {
    while (ini <= fim) {
       
        int meio = ini + (fim - ini) / 2;
        
        if (v[meio] == k) {
            return meio; 
        }
        else if (k > v[meio]) {
            ini = meio + 1; 
        } else {
            fim = meio - 1; 
        }
    }
    return -1; 
}

int main() {
    
    int v[6] = {2, 5, 8, 12, 16, 23};
    int n = 6;
    int chave = 16;
    
    int indice = buscaBinaria(v, 0, n - 1, chave);
    
    if (indice != -1) {
        printf("Busca Binaria: Chave %d encontrada no indice %d.\n", chave, indice);
    } else {
        printf("Busca Binaria: Chave %d nao encontrada.\n", chave);
    }
    
    return 0;
}