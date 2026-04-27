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

printf("***Jogo Super Trunfo***\n");


//Carta 1
printf("Digite o codigo da carta1 (A01):");
scanf("%s", &codigo1);

printf("Digite o estado1 (A-H):");
scanf("%s", &estado1);

printf("Digite o nome da cidade1:");
scanf("%s", &cidade1);

printf("Digite a populacao1:");
scanf("%d", &populacao1);

printf("Digite ponto turisticos1:");
scanf("%d", &ponto_turisticos1);

printf("Digite a area em km1:");
scanf("%f", &area_em_km1);

printf("Digite o pib1:");
scanf("%f", &pib1);

float densidade_populacional1 = (float) populacao1 / area_em_km1;
printf("Desidade populacional é: %f \n", densidade_populacional1);

float pib_per_capita1 = (float) populacao1 / pib1;
printf("Pib per capita é: %f \n", pib_per_capita1);


printf("\n");

//Carta 2
printf("Digite o codigo da carta2 (B02):");
scanf("%s", &codigo2);

printf("Digite o estado2 (A-H):");
scanf("%s", &estado2);

printf("Digite o nome da cidade2:");
scanf("%s", &cidade2);

printf("Digite a populacao2:");
scanf("%d", &populacao2);

printf("Digite ponto turisticos2:");
scanf("%d", &ponto_turisticos2);

printf("Digite a area em km2:");
scanf("%f", &area_em_km2);

printf("Digite o pib2:");
scanf("%f", &pib2);

float densidade_populacional2 = (float) populacao2 / area_em_km2;
printf("Desidade populacional é: %f \n", densidade_populacional2);

float pib_per_capita2 = (float) populacao2 / pib2;
printf("Pib per capita é: %f \n", pib_per_capita2);




return 0;
} 
