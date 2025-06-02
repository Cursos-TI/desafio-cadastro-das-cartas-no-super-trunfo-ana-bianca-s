#include <stdio.h>

int main() {
    //Declarando variáveis
    char estado1,estado2;
    char cidade1[50],cidade2[50];
    int populacao1,populacao2;
    float area1,area2;
    float pib1, pib2;
    int pontoTuristico1, pontoTuristico2;
    char codigo1[50],codigo2[50];

    //Informar os dados da primeira carta    
    printf("Desafio super trunfo - Cadastro de cartas\n\n");
    printf("Escreva a seguir as informações da primeira carta\n");
        printf("Informe o Estado\n");
        scanf("%c", &estado1);

        printf("Informe o Código\n");
        scanf("%s", codigo1);

        printf("Informe o Nome da Cidade\n");
        scanf("%s",cidade1);

        printf("Informe a População\n");
        scanf("%d",&populacao1);

        printf("Informe a Área (em km²)\n");
        scanf("%f",&area1);

        printf("Informe o PIB\n");
        scanf("%f",&pib1);

        printf("Informe o Número de Pontos Turísticos\n");
        scanf("%d",&pontoTuristico1);

    //Informar os dados da segunda carta
    printf("\nEscreva a seguir as informações da segunda carta\n");
        printf("Informe o Estado\n");
        scanf(" %c",&estado2);

        printf("Informe o Código\n");
        scanf("%s",codigo2);

        printf("Informe o Nome da Cidade\n");
        scanf("%s",cidade2);

        printf("Informe a População\n");
        scanf("%d",&populacao2);

        printf("Informe a área (em km²)\n");
        scanf("%f",&area2);

        printf("Informe o PIB\n");
        scanf("%f",&pib2);

        printf("Informe o Número de Pontos Turísticos\n");
        scanf("%d",&pontoTuristico2);

    printf("\nDados das cartas cadastradas\n");
        //Mostrar os dados da primeira carta
        printf("\nCARTA 1:\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %s\n",codigo1);
        printf("Cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f km²\n",area1);
        printf("PIB: %.2f bilhões de reais\n",pib1);
        printf("Número de Pontos Turísticos: %d\n\n",pontoTuristico1);

        //Mostrar os dados da segunda carta
        printf("Carta 2:\n");
        printf("Estado: %c\n",estado2);
        printf("Código:%s\n",codigo2);
        printf("Cidade: %s\n",cidade2);
        printf("População: %d\n",populacao2);
        printf("Área: %.2f km²\n",area2);
        printf("PIB: %.2f bilhões de reais\n",pib2);
        printf("Número de Pontos Turisticos: %d\n", pontoTuristico2);
    //comment

    return 0;
}