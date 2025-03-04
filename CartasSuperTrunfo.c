#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Declarando variáveis
    char estado1,estado2;
    char cidade1[50],cidade2[50];
    int populacao1,populacao2;
    float area1,area2;
    float pib1, pib2;
    int pontoTuristico1, pontoTuristico2;
    char codigo1[3],codigo2[3];

    printf("Desafio super trunfo - Cadastro de cartas\n");
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

    //Mostrar os dados
    printf("Estado é: %c\n", estado1);
    printf("O Código é: %s\n",codigo1);
    printf("Cidade é: %s\n", cidade1);
    printf("População é: %d\n", populacao1);
    printf("Área (em km²) é: %g\n",area1);
    printf("PIB: %g\n",pib1);
    printf("Número de Pontos Turísticos: %d\n",pontoTuristico1);

    return 0;
}
