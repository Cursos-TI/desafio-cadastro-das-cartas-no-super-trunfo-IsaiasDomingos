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
    unsigned long int populacao1; 
    int turismo1;
    char nome1[50];
    char cod1[4]; 
    float pib1, area1;
    char estado1;

    // Variaveis para a segunda carta
    unsigned long int populacao2;
    int turismo2;
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
    scanf("%lu", &populacao1);

    printf("Qual a área da cidade? (em km²) ");
    scanf("%f", &area1);

    printf("Qual e o PIB da cidade? ");
    scanf("%f", &pib1);

    printf("Quantos pontos turisticos tem a cidade? ");
    scanf("%d", &turismo1);

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
    scanf("%lu", &populacao2);

    printf("Qual a área da cidade? (em km²) ");
    scanf("%f", &area2);

    printf("Qual e o PIB da cidade? ");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos tem a cidade? ");
    scanf("%d", &turismo2);
    

    densidadepop2 = populacao2 / area2;
    pibcap2 = pib2 / populacao2;
 
    // Desafio: nível MESTRE:
    // Calcular o Super Poder, Comparar as Cartas, Exibir os Resultados das Comparações

    float superpoder1, superpoder2;
   
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)turismo1 + pibcap1 + (1 / densidadepop1);
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)turismo2 + pibcap2 + (1 / densidadepop2);
     
<<<<<<< HEAD
=======
    // comparando as cartaS
>>>>>>> d365ae3677e3d0820fe400d2949eaf02a5b9b372

    // Exibicao 

    printf("\n ***Comparação de Cartas:***\n");
    printf("\n Resultado: \n");
    printf ("1 = Carta 1 vence\n");
    printf("0 = Carta 2 vence \n");
    printf("\nPopulação: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2); 
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", turismo1 > turismo2);
    printf("Densidade Populacional: %d\n", densidadepop1 < densidadepop2);
    printf("PIB per Capita: %d\n", pibcap1 > pibcap2);
    printf("Super Poder: %d\n", superpoder1 > superpoder2);
   

    return 0;
}