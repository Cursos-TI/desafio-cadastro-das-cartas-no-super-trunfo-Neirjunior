#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Neir junior

int main() {
    char estado1[1], estado2[1];
    char carta1[4], carta2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float km1, km2;
    float pib1, pib2;
    int turisticos1, turisticos2;
    printf("Digite a primeira letra do Estado: \n");
    scanf("%s", &estado1);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &carta1);
    
    printf("Digite o nome da Cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a quantidade da populacional da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a Area em KM da Cidade: \n");
    scanf("%f", &km1);

    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos da Cidade : \n");
    scanf("%d", &turisticos1);
    
    printf("Digite a primeira letra do Estado: \n");
    scanf("%s", &estado2);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &carta2);
    
    printf("Digite o nome da Cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a quantidade da populacional da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a Area em KM da Cidade: \n");
    scanf("%f", &km2);

    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos da Cidade : \n");
    scanf("%d", &turisticos2);

    printf("Carta 01: \n");
    printf("Estado: %s \n", estado1);
    printf("Codigo %s%s \n", estado1, carta1);
    printf("Nome da Cidade: %s \n",cidade1);
    printf("Populacao: %d milhoes de habitantes\n", populacao1);
    printf("Area: %f Km² \n",km1);
    printf("PIB: %f reais \n",pib1);
    printf("Pontos Turisticos: %d \n",turisticos1);
    printf("\n");
    printf("Carta 02: \n");
    printf("Estado: %s \n", estado2);
    printf("Codigo %s%s \n",estado2, carta2);
    printf("Nome da Cidade: %s \n",cidade2);
    printf("Populacao: %d milhoes de habitantes \n", populacao2);
    printf("Area: %f Km² \n", km2);
    printf("PIB: %f reais \n", pib2);
    printf("Pontos Turisticos: %d \n", turisticos2);

    return 0;
}
