#include <stdio.h>
int menorIndice(int v[], int ini, int fim){
    
    int menor = ini;
    
    for(int i=ini+1; i<=fim ;i++){
        if(v[menor] > v[i]){
            menor = i;
        }
    }
    return menor;
}
void troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}    
void ordenacaoSelecao(int v[], int ini, int fim) {
    if(ini>fim){
        return ;
    }
    
    int m = menorIndice(v, ini, fim);

    troca(&v[ini], &v[m]);

     ordenacaoSelecao(v, ini+1, fim);
     
}
int main() {
    int v[10] = {4, 5 , 8, 7, 9, 3 ,11 , 15 , 6, 9 };
    int n = 10;
    printf("Antes da ordenacao \n");
    for(int i = 0 ; i<n ; i++){
        printf("%d ",v[i]);
    }
    ordenacaoSelecao(v, 0, n-1);
    
    printf("\nApos ordenacao \n");

    for(int i = 0 ; i<n ; i++){
        printf("%d ",v[i]);
    }
    return 0;
}