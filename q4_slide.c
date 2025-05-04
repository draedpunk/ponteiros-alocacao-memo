// Crie uma função que:
// ○ Recebe um vetor v e seu tamanho n por parâmetro;
// ○ Cria um novo vetor por alocação dinâmica, preenchendo-o com
// o conteúdo de v em ordem inversa
// ○ Retorne o novo vetor
// ○ Use o protótipo int *inverter(int *v, int n);
// ○ Crie um exemplo de uso desta função na função main()
// ○ Não esqueça de liberar a memória utilizada!
#include <stdio.h>
#include <stdlib.h>

int *inverter(int *v, int n){
    int *novo_vetor = malloc(n * sizeof(int));

    if (novo_vetor == NULL) {
        return NULL;
    }

    int p =0;
    for (int i = n - 1; i >= 0; i--){
        novo_vetor[p] = v[i];
        p++;
    }

    return novo_vetor;
      
}

int main(){
    int tamanho = 5;
    int vetor[tamanho];

    for (int i = 0; i < tamanho;i++){
        vetor[i] = i +1;
    }

    int *vetor_invertido = inverter(vetor, tamanho);
    if (vetor_invertido == NULL){
        printf("Erro na alocacao de memoria!!");
        return 1;
    }

    printf("Vetor invertido:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor_invertido[i]);
    }
    printf("\n");

    free(vetor_invertido);

    return 0;
}