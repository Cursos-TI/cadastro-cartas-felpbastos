#include <stdio.h>

int main(){

//Variaveis carta 1
char estado1, codigo1[10], cidade1[50];
int populacao1, ponto_turisticos1;
float area_em_km1, pib1;

//Variaveis carta 2
char estado2, codigo2[10], cidade2[50];
int populacao2, ponto_turisticos2;
float area_em_km2, pib2;

//Carta 1
printf("Digite o codigo da carta1 (A01):");
scanf("%s", &codigo1);

printf("Digite o estado1 (A-H):");
scanf("%s", &estado1);

printf("Digite o nome da cidade1:");
scanf("%s", &cidade1);

printf("Digite a populacao1:");
scanf("%f", &populacao1);

printf("Digite ponto turisticos1:");
scanf("%f", &ponto_turisticos1);

printf("Digite a area em km1:");
scanf("%f", &area_em_km1);

printf("Digite o pib1:");
scanf("%f", &pib1);

printf("\n");

//Carta 2
printf("Digite o codigo da carta2 (A02):");
scanf("%s", &codigo2);

printf("Digite o estado2 (A-H):");
scanf("%s", &estado2);

printf("Digite o nome da cidade2:");
scanf("%s", &cidade2);

printf("Digite a populacao2:");
scanf("%f", &populacao2);

printf("Digite ponto turisticos2:");
scanf("%f", &ponto_turisticos2);

printf("Digite a area em km2:");
scanf("%f", &area_em_km2);

printf("Digite o pib2:");
scanf("%f", &pib2);



return 0;
} 
