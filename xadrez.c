#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
//Bispo: 5 casas na diagonal superior direita
//Torre: 5 casas para a direita
//Rainha: 8 casas para a esquerda

//uso da Recursividade
void moverBispo(int casas){
    if (casas > 0)
    {
        printf("Cima ");
        printf("Esquerda\n");
        moverBispo(casas - 1);
    }
    
}

void moverTorre(int casas){
    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
    
}

void moverRainha(int casas){
    if (casas > 0)
    {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
    
}

int main() {
    
    // Chamando o Resultado no Terminal.

    printf("\nMovimentação Bispo.\n");
    moverBispo(5);
    printf("\nMovimentação Torre.\n");
    moverTorre(5);
    printf("\nMovimentação Rainha.\n");
    moverRainha(8); 

    // Essa parte abaixo e o que eu tinha feito antes do desafio mestre de usar recursividade.


    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    //printf("Movimentação do Bispo.\n");
    //int bispo = 1;
    //while (bispo <= 5)
    //{
    //    printf("Cima ");
    //    printf("Esquerda\n");
    //   bispo++;
    //}
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    //printf("\nMovimentação da Torre.\n");
    //int torre = 1;
    //do
    //{
    //   printf("Direita\n");
    //    torre++;
    // } while (torre <= 5);    

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    //printf("\nMovimentação da Rainha.\n");
    //int rainha;
    //for (rainha = 1; rainha <= 8; rainha++)
    //{
    //    printf("Esquerda\n");
    //}
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    
    printf("\nMovimentação do Cavalo.\n");
    int cavalo;
    for (int cavalo = 1; cavalo <= 3; cavalo++)    {
        while (cavalo <= 3 )
        {
            printf("Baixo\n");
            cavalo++;
        }
        printf("Esquerda\n");
    }    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}