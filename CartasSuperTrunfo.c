#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main(){
     printf("novo commit\n");   
    int codigo, populacao, turismo;
   char nome[50];
    float PIB, tamanho;
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Qual  o codigo da cidade?");
    scanf("%d", &codigo);

    printf("Qual o nome da cidade?");
    scanf("%s", nome);

    printf("Qual a população da cidade?");
    scanf("%d", &populacao);

    printf("Qual o Tamanho da cidade?");
    scanf("%f", &tamanho);

    printf("Qual é o PIB da cidade?");
    scanf("%f", &PIB);

    printf("Quantos pontos turísticos tem a cidade?");
    scanf("%d", &turismo);

        // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Código da cidade: %d \n", codigo);
    printf("Nome da cidade: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Tamanho da cidade: %f \n", tamanho);
    printf("O Produto Interno Bruto da cidade é: %f \n", PIB);

    return 0;
}
