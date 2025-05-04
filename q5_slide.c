// Crie um programa que gerencie o cadastro de estudantes de uma
// escola. O programa deve permitir adicionar estudantes em um
// vetor e listar os cadastrados. O uso de funções e ponteiros é
// obrigatório.
// ● Armazene em um vetor todos os estudantes para organizar os
// dados.
// ● Cada estudante deve ter as seguintes informações:
// ○ Nome (string)
// ○ Idade (int)
// ○ Nota (float)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char nome[25];
    int idade;
    float nota;
} Estudante;

void adicionar_estudante(Estudante *aluninho, int *qtd){

    for (int i = 0; i < 3; i++){
        // pegar o nome
        printf("Informe o nome do aluno:\n");
        scanf("%s", aluninho[i].nome);

        // peegar idade
        printf("Informe a idade do aluno:\n");
        scanf("%d", &(aluninho[i].idade));

        // pegar nota
        printf("Informe a nota do aluno:\n");
        scanf("%f", &(aluninho[i].nota));

        (*qtd)++;
    }
    printf("Estudante cadastrado!!\n\n");
}

void listar_estudantes(Estudante *aluninho, int qtd){
    printf("Lista de estudantes cadastrados:\n\n");
    for (int i = 0; i < qtd; i++){
        printf("ESTUDANTE #%d: Nome: %s\n | Idade: %d | Nota: %.f\n\n",i + 1, aluninho[i].nome, aluninho[i].idade, aluninho[i].nota);

    }

}


int main(){
    Estudante alunos[150];
    int qtd_alunos = 0;
    int op;

    do{
        printf("1. Adicionar estudante\n");
        printf("2. Listar estudantes\n");
        printf("0. Sair\n");
        scanf("%d", &op);
        getchar();


        switch (op){
            case 1:
                adicionar_estudante(alunos, &qtd_alunos);
                break;
            case 2:
                listar_estudantes(alunos, qtd_alunos);
                break;
            default:
                break;
        }

    } while(op !=0);
    
    return 0;
}