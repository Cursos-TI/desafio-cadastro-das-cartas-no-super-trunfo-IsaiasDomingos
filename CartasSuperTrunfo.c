#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main(){
      
    int populacao1, populacao2, turismo1, turismo2;
    char nome1[50], nome2[50];
    char cod1[3], cod2 [3];
    float pib1, pib2, tamanho1, tamanho2;
    char estado1,  estado2;
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código  da cidade , nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Bem-vindo(a) ao Jogo Super Trunfo: \n");
    printf("Insira os dados da primeira carta: \n");
    printf("Qual o Estado?");
    scanf("%c", &estado1);
    printf("Qual  o codigo da cidade?");
    scanf("%s", &cod1);
    printf("Qual o nome da cidade?");
    scanf("%s", nome1);
    printf("Qual a população da cidade?");
    scanf("%d", &populacao1);
    printf("Qual o Tamanho da cidade?");
    scanf("%f", &tamanho1);
    printf("Qual é o PIB da cidade?");
    scanf("%f", &pib1);
    printf("Quantos pontos turísticos tem a cidade?");
    scanf("%d", &turismo1);

    printf("\n Insira os dados da segunda carta: \n");
    printf("Qual o Estado?");
    scanf("%c", &estado2);
    printf("Qual  o codigo da cidade?");
    scanf("%s", &cod2);
    printf("Qual o nome da cidade?");
    scanf("%s", nome2);
    printf("Qual a população da cidade?");
    scanf("%d", &populacao2);
    printf("Qual o Tamanho da cidade?");
    scanf("%f", &tamanho2);
    printf("Qual é o PIB da cidade?");
    scanf("%f", &pib2);
    printf("Quantos pontos turísticos tem a cidade?");
    scanf("%d", &turismo2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    printf("\n  CARTA 1 \n");
    printf("Estado:%c \n", estado1);
    printf("Código da cidade:%s \n", cod1);
    printf("Nome da cidade:%s \n", nome1);
    printf("População:%d \n", populacao1);
    printf("Tamanho da cidade:%f \n", tamanho1);
    printf("O Produto Interno Bruto da cidade é:%f \n", pib1);

    printf("\n  CARTA 2: \n");
    printf("Estado:%c \n", estado2);
    printf("Código da cidade:%s \n", cod2);
    printf("Nome da cidade:%s \n", nome2);
    printf("População:%d \n", populacao2);
    printf("Tamanho da cidade:%f \n", tamanho2);
    printf("O Produto Interno Bruto da cidade é:%f \n", pib2);

    return 0;
}