#include <stdio.h>

//Código do primeiro desafio
typedef struct {
    char estado[3]; 
    char cidade[30]; 
    int populacao;
    char codigoCarta[5];  
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

int main () {
    Carta carta1, carta2;

    // Entrada para a primeira carta
    printf("\nDigite os dados da carta 01\n");
    printf("Estado (ex: SP): ");
    scanf("%s", carta1.estado);  
    printf("Código da carta (ex: A01): ");
    scanf("%s", carta1.codigoCarta);  
    printf("Nome da cidade: ");
    getchar();  
    fgets(carta1.cidade, sizeof(carta1.cidade), stdin);  
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (em Km²): ");
    scanf("%f", &carta1.area);
    printf("PIB da cidade: ");
    scanf("%f", &carta1.pib);
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Entrada para a segunda carta
    printf("\nDigite os dados da carta 02\n");
    printf("Estado (ex: SP): ");
    scanf("%s", carta2.estado);  
    printf("Código da carta (ex: B02): ");
    scanf("%s", carta2.codigoCarta); 
    printf("Nome da cidade: ");
    getchar();  
    fgets(carta2.cidade, sizeof(carta2.cidade), stdin);  
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (em Km²): ");
    scanf("%f", &carta2.area);
    printf("PIB da cidade: ");
    scanf("%f", &carta2.pib);
    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

//Segundo desafio

        // Cálculos de Densidade Populacional e PIB per capita
        float densidadePopulacional1 = carta1.populacao / carta1.area;
        float pibPerCapita1 = carta1.pib / carta1.populacao;
    
        float densidadePopulacional2 = carta2.populacao / carta2.area;
        float pibPerCapita2 = carta2.pib / carta2.populacao;
    
        // Exibição dos dados cadastrados
        printf("\n-- Dados cadastrados --\n");
    
        // Dados da carta 01
        printf("\n-- Dados da carta 01 --\n");
        printf("Código da carta: %s\n", carta1.codigoCarta);
        printf("Estado: %s\n", carta1.estado);
        printf("Cidade: %s\n", carta1.cidade);  
        printf("População: %d\n", carta1.populacao);
        printf("Área: %.2f Km²\n", carta1.area);
        printf("PIB: %.2f\n", carta1.pib);
        printf("Pontos turísticos: %d\n", carta1.pontosTuristicos);
        printf("Densidade Populacional: %.2f pessoas por Km²\n", densidadePopulacional1);
        printf("PIB per capita: %.2f\n", pibPerCapita1);
    
        // Dados da carta 02
        printf("\n-- Dados da carta 02 --\n");
        printf("Código da carta: %s\n", carta2.codigoCarta);
        printf("Estado: %s\n", carta2.estado);
        printf("Cidade: %s\n", carta2.cidade);  
        printf("População: %d\n", carta2.populacao);
        printf("Área: %.2f Km²\n", carta2.area);
        printf("PIB: %.2f\n", carta2.pib);
        printf("Pontos turísticos: %d\n", carta2.pontosTuristicos);
        printf("Densidade Populacional: %.2f pessoas por Km²\n", densidadePopulacional2);
        printf("PIB per capita: %.2f\n", pibPerCapita2);
    
        // Comparação de um atributo (exemplo: População)
        printf("\nComparação de cartas (Atributo: População):\n");
        printf("Carta 1 - %s (%s): %d\n", carta1.cidade, carta1.estado, carta1.populacao);
        printf("Carta 2 - %s (%s): %d\n", carta2.cidade, carta2.estado, carta2.populacao);
    
        if (carta1.populacao > carta2.populacao) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
        } else if (carta1.populacao < carta2.populacao) {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
        } else {
            printf("Resultado: Empate! Ambas as cidades têm a mesma população.\n");
        }

    return 0;
}