// Faça um único procedimento que converte um valor em metros para: (i)
// jardas; (ii) pés; e (iii) polegadas. Use a função no método main().
// Lembre-se que 1 metro é igual a aproximadamente 1.0940 jardas, 3.2810
// pés, e 39.3701 polegadas.
// Dica: utilize o protótipo: void dist(float metros, float *jardas, float *pes,
// float *polegadas);
#include <stdio.h>

void dist(float metros, float *jardas, float *pes, float *polegadas){
    *jardas = metros * 1.0940;
    *pes = metros * 3.2810;
    *polegadas = metros * 39.3701;
}

int main(){
    float metros = 1.49;
    float jardas, pes, polegadas;

    dist(metros, &jardas, &pes, &polegadas);

    printf("O valor de %.2f metro(s) em jardas eh: %.2f jardas\n", metros, jardas);
    printf("O valor de %.2f metro(s) em pes eh: %.2f pes\n", metros, pes);
    printf("O valor de %.2f metro(s) em polegadas eh: %.2f polegadas\n", metros, polegadas);

    return 0;
}
