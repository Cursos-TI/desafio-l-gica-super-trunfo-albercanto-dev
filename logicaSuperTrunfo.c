#include <stdio.h>

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1, estado2;
    char codigoCarta1[4], codigoCarta2[4];
    char nomeCarta1[100], nomeCarta2[100];
    int populacaoCarta1, populacaoCarta2;
    float areaCarta1, areaCarta2;
    float pibCarta1, pipCarta2;
    int pontosTuristicosCarta1, pontosTuristicosCarta2;
    float densidadePopulacionalCarta1, densidadePopulacionalCarta2;
    float pibPerCapitaCarta1, pibPerCapitaCarta2;
    float superPoderCarta1, superPoderCarta2;



    // Cadastro das Cartas:

    printf("Matecheck - Super Trunfo - Países / Cadastro de Cartas \n \n");
    
    //Cadastro da Primeira Carta
    printf("Cadastro da Primeira Carta \n \n");

    printf("Informe o Estado da carta: ");
    scanf(" %c", &estado1);

    printf("Informe o código da carta: ");
    scanf(" %s", codigoCarta1);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCarta1);

    printf("Informe o valor da população: ");
    scanf("%d", &populacaoCarta1);

    printf("Informe a àrea da cidade: ");
    scanf("%f", &areaCarta1);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pibCarta1);

    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicosCarta1);

    printf("\n \n"); //Comando utilizado apenas para pular duas linhas e melhorar a visualização

    //Cadastro da Segunda Carta
    printf("Cadastro da Segunda Carta \n \n");

    printf("Informe o Estado da carta: ");
    scanf(" %c", &estado2);

    printf("Informe o código da carta: ");
    scanf(" %s", codigoCarta2);

    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCarta2);

    printf("Informe o valor da população: ");
    scanf("%d", &populacaoCarta2);

    printf("Informe a àrea da cidade: ");
    scanf("%f", &areaCarta2);

    printf("Informe o PIB da cidade: ");
    scanf("%f", &pipCarta2);

    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicosCarta2);

    //calculo da densidade populacional e do pibpercapta
    densidadePopulacionalCarta1 = (float) populacaoCarta1 / areaCarta1;
    densidadePopulacionalCarta2= (float) populacaoCarta2 / areaCarta2;
    
    pibPerCapitaCarta1= (float) (pibCarta1 * 1000000000) / populacaoCarta1;
    pibPerCapitaCarta2 = (float) (pipCarta2 * 1000000000) / populacaoCarta2;

    // calculo do superPoder.
    superPoderCarta1 = (float) populacaoCarta1 + areaCarta1 + pibCarta1 + (float) pontosTuristicosCarta1 + (1/densidadePopulacionalCarta1) + pibPerCapitaCarta1;
    superPoderCarta2 = (float) populacaoCarta2 + areaCarta2 + pipCarta2 + (float) pontosTuristicosCarta2 + (1/densidadePopulacionalCarta2) + pibPerCapitaCarta2;

    // Exibição dos Dados das Cartas:

    printf("\n \n"); //Comando utilizado apenas para pular duas linhas e melhorar a visualização
    
    printf("Carta 1 \n");
    printf("Estado: %c \n", estado1);
    printf("Código da carta: %s \n", codigoCarta1);
    printf("Nome da Cidade: %s \n", nomeCarta1);
    printf("População: %d \n", populacaoCarta1);
    printf("Área: %.2f Km² \n", areaCarta1);
    printf("PIB: %.2f bilhões de reais \n", pibCarta1);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicosCarta1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacionalCarta1);
    printf("PIB per Capita: %.2f reais \n", pibPerCapitaCarta1);
    printf("Superpoder carta 1: %.3f \n", superPoderCarta1);


    printf("\n \n"); //Comando utilizado apenas para pular duas linhas e melhorar a visualização

    // Informações da Segunda Carta
    printf("Carta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Código da carta: %s \n", codigoCarta2);
    printf("Nome da Cidade: %s \n", nomeCarta2);
    printf("População: %d \n", populacaoCarta2);
    printf("Área: %.2f Km² \n", areaCarta2);
    printf("PIB: %.2f bilhões de reais \n", pipCarta2);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicosCarta2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacionalCarta2);
    printf("PIB per Capita: %.2f reais \n", pibPerCapitaCarta2);
    printf("Superpoder carta 2: %.3f \n", superPoderCarta2);

   
    printf("\n \n"); //Comando utilizado apenas para pular duas linhas e melhorar a visualização

    
    // Comparação das cartas

    printf("Comparação de cartas (Atributo: População):\n \n");
 

    printf("Carta 1 - %s: %d \n", nomeCarta1, populacaoCarta1);
    printf("Carta 2 - %s: %d \n \n", nomeCarta2, populacaoCarta2);

    if (populacaoCarta1 > populacaoCarta2){
        printf("Resultado carta 1 - %s Venceu! \n \n", nomeCarta1);
    } else {
        printf("Resultado carta 2 - %s Venceu! \n \n", nomeCarta2);
    }
    
   

    
    

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
