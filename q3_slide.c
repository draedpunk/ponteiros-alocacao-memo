//Escreva uma função que receba um int c (que pode representar um
//caractere ASCII, por exemplo) e transforme-o em uma string, ou
//seja, devolva uma string de comprimento 1 tendo c como único
//elemento. Lembre-se de usar o ‘\0’
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* devolver_caracter(int c){
    char *letra_str = (char*) malloc(2 * sizeof(char));

    if (letra_str == NULL) {
        return NULL; 
    } 
    
    char letra = (char)c;

    letra_str[0] = letra;
    letra_str[1]= '\0';

    return letra_str;
}

int main(){
    int numero= 80;
    char *r = devolver_caracter(numero);

    if (r == NULL){
        printf("Erro na alocação de memoria!");
        return 1;
    }
    printf("String do caracter %d: %s\n", numero, r);
    free(r);
    
    return 0;
}