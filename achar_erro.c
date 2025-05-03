#include <stdio.h>

int main() {
    int valor;
    scanf("%d", &valor);
    int *p = &valor; // aqui vai sair o endereço de valor QUE ja esta com um valor obtido no scanf
    *p = (*p) * (*p);
    printf("Valor ao quadrado = %d\n", valor);
    return 0;
}