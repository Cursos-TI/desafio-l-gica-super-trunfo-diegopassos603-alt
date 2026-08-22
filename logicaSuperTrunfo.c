#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Declaração de variáveis da carta 1
    char estado1;
    char cidade1[50], codigo1[50], resultado[50];
    int pontos_turisticos1;
    unsigned long int populacao1;
    float area1, pib1;
    float densidade1, capita1;

    // Declaração de variáveis da carta 2
    char estado2;
    char cidade2[50], codigo2[50];
    int pontos_turisticos2;
    unsigned long int populacao2;
    float area2, pib2;
    float densidade2, capita2;

    // Declaração de variáveis para comparação com switch
    int opcao;

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
    scanf("%d", &pontos_turisticos1);

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
    scanf("%d", &pontos_turisticos2);

    // Cálculo da densidade populacional e do PIB per capita

    densidade2 = populacao2 / area2;
    capita2 = (float) pib2 / populacao2;


    // Menu de seleção do atributo
    printf("\n--- Escolha o atributo para comparar: ---\n");
    printf("1 - Populacao (Mianhoes)\n");
    printf("2 - Area (Milhoes km²)\n");
    printf("3 - PIB (Trilhoes USD)\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica (hab/km²)\n");
    printf("Digite a opcao: ");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO DA COMPARACAO ===\n");
    printf("Cartas: %s VS %s\n", cidade1, cidade2);

    // Switch direciona qual atributo será testado e impresso
    switch (opcao) {
        case 1:
            printf("Atributo: Populacao\n");
            printf("Valores: %s: %d | %s: %d\n", cidade1, populacao1, cidade2, populacao2);
            
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("Valores: %s: %.2f | %s: %.2f\n", cidade1, area1, cidade2, area2);
            
            if (area1 > area2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("Valores: %s: %.2f | %s: %.2f\n", cidade1, pib1, cidade2, pib2);
            
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turisticos\n");
            printf("Valores: %s: %d | %s: %d\n", cidade1, pontos_turisticos1, cidade2, pontos_turisticos2);
            
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demografica\n");
            printf("Valores: %s: %.1f | %s: %.1f\n", cidade1, densidade1, cidade2, densidade2);
            
            // Regra especial: Menor densidade vence no Super Trunfo
            if (densidade1 < densidade2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida de atributo.\n");
            break;
    }

    return 0;
}