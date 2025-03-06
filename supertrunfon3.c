#include <stdio.h>

int main() {
  
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nomeCidade1[] = "Belém";
    unsigned long int populacao1 = 2350000;
    float area1 = 1059.40;
    float pib1 = 28.49;
    int pontosTuristicos1 = 42;
    
    char estado2 = 'B';
    char codigo2[] = "B01";
    char nomeCidade2[] = "São Paulo";
    unsigned long int populacao2 = 12325000;
    float area2 = 1559.72;
    float pib2 = 672.84;
    int pontosTuristicos2 = 38;
    
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    
    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;
    
    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);
    
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f mil reais/hab\n", pibPerCapita1 * 1000);
    printf("Super Poder: %.2f\n", superPoder1);
    
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f mil reais/hab\n", pibPerCapita2 * 1000);
    printf("Super Poder: %.2f\n", superPoder2);
    
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (1)\n", populacao1 > populacao2 ? 1 : 2);
    printf("Área: Carta %d venceu (1)\n", area1 > area2 ? 1 : 2);
    printf("PIB: Carta %d venceu (1)\n", pib1 > pib2 ? 1 : 2);
    printf("Pontos Turísticos: Carta %d venceu (1)\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu (1)\n", densidade1 < densidade2 ? 1 : 2);
    printf("PIB per Capita: Carta %d venceu (1)\n", pibPerCapita1 > pibPerCapita2 ? 1 : 2);
    printf("Super Poder: Carta %d venceu (1)\n", superPoder1 > superPoder2 ? 1 : 2);
    
    return 0;
}
