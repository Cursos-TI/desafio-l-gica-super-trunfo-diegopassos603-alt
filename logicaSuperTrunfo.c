#include <stdio.h>

int main() {

    // Declaração de variáveis da carta 1
    char estado1;
    char cidade1[50], codigo1[50], resultado[50];
    int ponto_turistico1;
    unsigned long int populacao1;
    float area1, pib1;
    float densidade1, capita1;

    // Declaração de variáveis da carta 2
    char estado2;
    char cidade2[50], codigo2[50];
    int ponto_turistico2;
    unsigned long int populacao2;
    float area2, pib2;
    float densidade2, capita2;

    
    // Cadastro das Cartas:

     // Entrada de dados para a carta 1
    printf("\n--- Carta 1 ---\n");

    printf("Estado: \n");
    scanf(" %c", &estado1);

    printf("Codigo: \n");
    scanf(" %s", codigo1);
    
    printf("Nome da Cidade: \n");
    scanf(" %[^\n]", cidade1);

    printf("População: \n");
    scanf("%lu", &populacao1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &ponto_turistico1);

    // Cálculo da densidade populacional e do PIB per capita

    densidade1 = populacao1 / area1;
    capita1 = (float) pib1 / populacao1;


    // Entrada de dados para a carta 2
    printf("\n--- Carta 2 ---\n");

    printf("Estado: \n");
    scanf(" %c", &estado2);

    printf("Codigo: \n");
    scanf(" %s", codigo2);

    printf("Nome da Cidade: \n");
    scanf(" %[^\n]", cidade2);

    printf("População: \n");
    scanf("%lu", &populacao2);

    printf("Área: \n");
    scanf(" %f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &ponto_turistico2);

    // Cálculo da densidade populacional e do PIB per capita

    densidade2 = populacao2 / area2;
    capita2 = (float) pib2 / populacao2;


    // Comparação de Carta,atributos como população.

    printf ("\nComparação de carta (Atributos população): \n");

    if (populacao1 > populacao2){
        printf ("\nCidade 1 tem a maior população. \n");
    } else {
        printf ("\nCidade 2 tem a maior população. \n");
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora)

    return 0;
}