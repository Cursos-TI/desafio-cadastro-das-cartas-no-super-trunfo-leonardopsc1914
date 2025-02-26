#include <stdio.h>

int main (){
char estado1 = 'A';
char codigo1[] = "A01";
char cidade1[] = "Belém";
int populacao1 = 2350000;
float area1 = 1059.45;
float pib1 = 28.49;
int turistico1 = 43;
float densidade1 = populacao1 / area1;
float pibpercapita1 = pib1 / populacao1;


char estado2 = 'B';
char codigo2[] = "B02";
char cidade2[] = "São Paulo";
int populacao2 = 16075150;
float area2 = 1559.72;
float pib2 = 672.84;
int turistico2 = 43;
float densidade2 = populacao2 / area2;
float pibpercapita2 = pib2 / populacao2;


printf("Carta: \n");
printf("Estado: %c\n", estado1);
printf("Código da cidade: %s\n", codigo1);
printf("Nome da cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Tamanho da área: %.2f km²\n", area1);
printf("Valor do PIB: %.2f bilhões de reais\n", pib1);
printf("Números de pontos turísticos: %d lugares\n", turistico1);
printf(" Número da Densidade Populacional: %.2f hab/km² \n", densidade1);
printf("Número do PIB Per Capita: %.8f bilhões de reais/hab \n", pibpercapita1);
printf("\n");


printf("Carta: \n");
printf("Estado: %c\n", estado2);
printf("Código da cidade: %s\n", codigo2);
printf("Nome da cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Tamanho da área: %.2f km²\n", area2);
printf("Valor do PIB: %.2f bilhões de reais\n", pib2);
printf("Números de pontos turísticos: %d lugares\n", turistico2);
printf(" Número da Densidade Populacional: %.2f hab/km² \n", densidade2);
printf("Número do PIB Per Capita: %.8f bilhões de reais/hab \n", pibpercapita2);
printf("\n");

return 0;
}