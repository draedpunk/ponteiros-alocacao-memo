// Crie um procedimento que duplica o conteúdo da memória apontada por
// um ponteiro p. Crie um segundo procedimento que eleva o mesmo
// número a um valor n. Utilize os protótipos a seguir:
// void duplica(int *p);
// void potencia(int *p, int n);
#include <stdio.h>

void duplica(int *p){
    *p = (*p) * 2;
    printf("Valor duplicado: %d\n", *p);
}

void potencia(int *p, int n){
    int r =1;
    for (int i = 0; i < n; i++){
        r *= (*p);
    }
    *p = r; // atualiza o valor de *p pra X nao continuar com 88
    printf("Valor elevado a %d: %d \n", n, r);
}

int main(){
    int x = 44;
    int *pX = &x; 
    duplica(pX);
    potencia(pX, 3);
    
    return 0;
}