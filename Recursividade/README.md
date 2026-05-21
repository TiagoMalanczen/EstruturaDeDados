# 🔄 Algoritmos Recursivos

Esta pasta armazena as implementações e conceitos focados no paradigma de recursividade aplicado a estruturas de dados.

## 🧠 Pilares da Recursividade

Para que um algoritmo recursivo seja seguro e eficiente, ele se apoia estritamente em dois conceitos:

1. **Caso Base:** A condição de parada. É a instância mais simples do problema que pode ser resolvida diretamente, sem novas chamadas. Sem ele, o programa entra em loop infinito e estoura a memória (**Stack Overflow**).
2. **Passo Recursivo:** A chamada da própria função passando uma subinstância menor do problema original, garantindo que o fluxo convirja em direção ao Caso Base.

## 📂 Arquivos Implementados

* `fatorial.c`: Cálculo matemático de $N!$ demonstrando o empilhamento de chamadas na Stack de execução do Sistema Operacional.
* `soma_vetor_rec.c`: Processamento de estruturas de dados lineares sem o uso de laços de repetição tradicionais (`for`/`while`), reduzindo o escopo do array a cada iteração de execução.
