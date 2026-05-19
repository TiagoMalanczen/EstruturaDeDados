# 🔍 Algoritmos de Busca em Vetores

Esta pasta contém as implementações e análises de eficiência para os algoritmos fundamentais de varredura e localização de dados em memória.

## 📊 Comparativo de Complexidade e Performance

### 1. Busca Sequencial (Linear)
* **Mecânica:** O algoritmo inspeciona o vetor elemento por elemento a partir de uma das extremidades.
* **Redução do Problema:** Cada iteração/chamada recursiva diminui o tamanho do problema em exatamente **1 unidade** ($N - 1$).
* **Complexidade:** $O(n)$ no pior caso. O número de comparações cresce de forma estritamente linear em relação ao tamanho do vetor.

### 2. Busca Binária (Logarítmica)
* **Pré-condição:** O vetor deve estar **obrigatoriamente ordenado**.
* **Mecânica:** O algoritmo inspeciona o elemento do meio. Se não for a chave, descarta metade do vetor.
* **Redução do Problema:** Cada iteração reduz o tamanho do problema **pela metade** ($N / 2$).
* **Complexidade:** $O(\log_2 n)$. Para um vetor massivo de 4.294.967.296 de posições, o algoritmo resolve a busca em no máximo **32 comparações**.
