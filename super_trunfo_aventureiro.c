#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Criado por Isaias Domingos



int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: Estado, código  da cidade , nome, população, área, PIB, número de pontos turísticos.

    // Variaveis para a primeira carta
    int populacao1, turismo1;
    char nome1[50];
    char cod1[4]; 
    float pib1, area1;
    char estado1;

    // Variaveis para a segunda carta
    int populacao2, turismo2;
    char nome2[50];
    char cod2[4]; 
    float pib2, area2;
    char estado2;

    //variaveis declaradas
    //Estado=estado, código da cidade=cod, nome=nome, população=populacao, área=area, PIB=pib, número de pontos turísticos=turism
     

    // Desafio: nível AVENTUREIRO:
    //Calculando Densidade Populacional=Divida a população da cidade pela sua área 
    //PIB per Capita=Divida o PIB da cidade pela sua população

    //Variaveis para a primeira carta
    float densidadepop1, pibcap1;
    //Variaveis para a segunda carta
    float densidadepop2, pibcap2;

    //Variaveis declaradas
    //densidadepop=Densidade Populacional, pibcap=PIB per Capita
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
      
    printf("\n***Bem-vindo(a) ao Jogo Super Trunfo:***\n");

    // Cadastro da primeira carta
    printf("Insira os dados da primeira carta:\n");
    printf("Qual o Estado? (Uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado1); 

    printf("Qual o codigo da cidade? (ex: A01): ");
    scanf("%s", cod1); 

    printf("Qual o nome da cidade? (Inserir nome junto sem o espaço:)");
    scanf("%s", nome1);

    printf("Qual a populacao da cidade?: ");
    scanf("%d", &populacao1);

    printf("Qual a área da cidade? (em km²) ");
    scanf("%f", &area1);

    printf("Qual e o PIB da cidade? ");
    scanf("%f", &pib1);

    printf("Quantos pontos turisticos tem a cidade? ");
    scanf("%d", &turismo1);

    // primeira carta AVENTUREIRO-Calculando Densidade Populacional (densidadepop) e PIB per Capita (pibcap)
    
    densidadepop1 = populacao1 / area1;
    pibcap1 = pib1 / populacao1;

    // Cadastro da segunda carta

    printf("\nInsira os dados da segunda carta:\n");
    printf("Qual o Estado? (Uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);

    printf("Qual o codigo da cidade? (ex: B02): ");
    scanf("%s", cod2); 

    printf("Qual o nome da cidade?: (Inserir o nome junto sem o espaço) ");
    scanf("%s", nome2);

    printf("Qual a populacao da cidade?: ");
    scanf("%d", &populacao2);

    printf("Qual a área da cidade? (em km²) ");
    scanf("%f", &area2);

    printf("Qual e o PIB da cidade? ");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos tem a cidade? ");
    scanf("%d", &turismo2);
    
    // Exibicao da primeira carta AVENTUREIRO -Calculando Densidade Populacional (densidadepop) e PIB per Capita (pibcap)

    densidadepop2 = populacao2 / area2;
    pibcap2 = pib2 / populacao2;


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibicao da primeira carta NOVATO
    printf("\nCARTA 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da cidade: %s\n", cod1);
    printf("Nome da cidade: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1); 
    printf("O Produto Interno Bruto da cidade é: %.2f\n", pib1); 
    printf("Numero de Pontos Turisticos: %d\n", turismo1);

    // Exibicao da primeira carta AVENTUREIRO
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepop1);
    printf("PIB per Capita: %.2f reais\n", pibcap1);
    
    // Exibicao da segunda carta NOVATO
    printf("\nCARTA 2:\n");
    printf("Estado: %c\n", estado2); 
    printf("Codigo da cidade: %s\n", cod2);
    printf("Nome da cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2); 
    printf("O Produto Interno Bruto da cidade é: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %2d\n", turismo2);
    
    // Exibicao da segunda carta AVENTUREIRO
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepop2);
    printf("PIB per Capita: %.2f reais\n", pibcap2);

     

    return 0;
}