#include <stdio.h>

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

    // Exibição dos dados cadastrados
    printf("\n-- Dados cadastrados --\n");

    // Dados da carta 01
    printf("\nDados da carta 01\n");
    printf("Código da carta: %s\n", carta1.codigoCarta);
    printf("Estado: %s\n", carta1.estado);
    printf("Cidade: %s", carta1.cidade);  
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f Km²\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontosTuristicos);

    // Dados da carta 02
    printf("\nDados da carta 02\n");
    printf("Código da carta: %s\n", carta2.codigoCarta);
    printf("Estado: %s\n", carta2.estado);
    printf("Cidade: %s", carta2.cidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f Km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}