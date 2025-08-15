#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    //Estou declarando as variaveis como mencionados na aulas 
    int codigo_da_cidade_1 = 1, codigo_da_cidade_2 = 2, Atributo_1 = 2, Atributo_2; //essas variaveis não serão informadas pelo usuario serão fixas
    int populacao_1 = 1000, populacao_2 = 1000, pontos_turisticos_1 = 2, pontos_turisticos_2 = 2;//cadastro das vareaveis de população e ponto turisticos 
    float area_1, area_2 = 000.00, PIB_1, PIB_2 = 00.00;// cadastro dos pontos flutuantes area e PIB
    char  nome_1[25] = "Cidade 1", nome_2[25] = "Cidade 2"; //nomes das cidades
    char estado_1 = 'A', estado_2 = 'B';
    float SuperPoder_A = 15.00, SuperPoder_B = 15.00;
    char *resultado_1 = "Cidade 1"; 
    char *resultado_2 = "Cidade 2";

    
    // Cadastro das Cartas:
        //abaixo dados da primaira carta
    printf("Jogador 1 digite os dados da Primeira carta.\n");
    printf("Jogador 1 Digite o nome da cidade da primeira carta - Apenas Letras:\n");
    scanf("%s", &nome_1);
    printf("Jogador 1 Digite a População da primeira carta - numero inteiro:\n");
    scanf("%d", &populacao_1);
    printf("Jogador 1 Digite a área em Km² da primeira carta - com separador decimal ponto final:\n");
    scanf("%f", &area_1);
    printf("Jogador 1 Digite o Valor do PIB Abreviado em Bilhoes de Reais da primeira carta - com separador decimal ponto final:\n");
    scanf("%f", &PIB_1);
    printf("Jogador 1 Digite a quantidade de pontos  turisticos da primeira carta - numero inteiro:\n");
    scanf("%d", &pontos_turisticos_1);
    printf("\n");
    float  Densidade_Populacional_1 = (float) populacao_1 / area_1; //calculo desnsidade populacional
    float PIB_per_Capita_1 = (float) (PIB_1 * 1000000000) / populacao_1; // calculo PIB per capita multipliquei pois o usuario esta para inserir dados abreviado
    
    //abaixo dados da segunda carta
    printf("Jogador 2 digite os dados da Segunda carta.\n");
    printf("Jogador 2 Digite o nome da cidade da Segunda carta - Apenas Letras:\n");
    scanf("%s", &nome_2);
    printf("Jogador 2 Digite a População da Segunda carta- numero inteiro:\n");
    scanf("%d", &populacao_2);
    printf("Jogador 2 Digite a área em Km² da Segunda carta - com separador decimal ponto final:\n");
    scanf("%f", &area_2);
    printf("Jogador 2 Digite o Valor do PIB Abreviado em Bilhoes de Reais da Segunda carta - com separador decimal ponto final:\n");
    scanf("%f", &PIB_2);
    printf("Jogador 2 Digite a quantidade de pontos  turisticos da Segunda carta- numero inteiro:\n");
    scanf("%d", &pontos_turisticos_2);
    printf("\n");
    float  Densidade_Populacional2 = (float) populacao_2 / area_2; //calculo media desnsidade populacional
    float PIB_per_Capita_2 = (float) (PIB_2 * 1000000000) / populacao_2; // calculo PIB per capita multipliquei pois o usuario esta para inserir dados abreviado
    // Exibição dos Dados das Cartas:
    //abaixo valores da primeira caixa jogador 1
    printf("abaixo sera exibida os dados da Primeira carta Jogador 1:\n");
    printf("\n");
    printf("Carta: %d\n", codigo_da_cidade_1);
    printf("Estado: %c\n", estado_1);
    printf("Código: %c0%d\n", estado_1,codigo_da_cidade_1);
    printf("Nome da Cidade: %s\n", nome_1);
    printf("População: %d Pessoas\n", populacao_1);
    printf("Área: %.2f Km²\n", area_1); // Formatação para 2 casas decimais.
    printf("PIB: %.2f Bilhões de Reais\n", PIB_1); // Formatação para 2 casas decimais.
    printf("Número Pontos Turísticos: %d\n", pontos_turisticos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional_1);
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita_1);


    printf("\n"); // Adicionei uma linha em branco para melhor leitura.

    //abaixo valores da primeira caixa jogador 1
    printf("abaixo sera exibida os dados da Segunda carta Jogador 2:\n");
    printf("\n");
    printf("Carta: %d\n", codigo_da_cidade_2);
    printf("Estado: %c\n", estado_2);
    printf("Código: %c0%d\n", estado_1,codigo_da_cidade_2);
    printf("Nome da Cidade: %s\n", nome_2);
    printf("População: %d Pessoas\n", populacao_2);
    printf("Área: %.2f Km²\n", area_2); // Formatação para 2 casas decimais.
    printf("PIB: %.2f Bilhões de Reais\n", PIB_2); // Formatação para 2 casas decimais.
    printf("Número Pontos Turísticos: %d\n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional2);//exibição da Densidade Populacional
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita_2);// exibição da Densidade PIB per Capita

    printf("\n"); // Adicionei uma linha em branco para melhor leitura. 


    // Comparação de Cartas:
    //menu comparação primeiro atributo
    printf("Escolha o Primeiro Atributo Para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Digite a opção\n");
    scanf("%d", &Atributo_1);

    switch (Atributo_1)
    {
    case 1:
        //Abaixo comparação de cartas POPULAÇÃO
    printf("Abaixo dados do primeiro atributo escolnhido: \n");
    printf("Nome do Pais(cidade): %s Vs %s\n", nome_1, nome_2);
   printf("Comparação de cartas (Atributo: População):\n");
   printf("Carta 1 População - %s: %d Pessoas\n", nome_1, populacao_1);
   printf("Carta 2 População - %s: %d Pessoas\n", nome_2, populacao_2);
   //teste logico popupação
   if(populacao_1 > populacao_2){
    printf("Resultado: Carta 1 População (%s) venceu!\n", nome_1);
   } else if(populacao_1 < populacao_2) {printf("Resultado: Carta 2 População (%s) venceu!\n", nome_2);} else {printf("Jogadores Empatarão no Atributo população. \n");}
   resultado_1 = populacao_1 > populacao_2 ? nome_1 : nome_2;
        break;
    case 2:
//Abaixo comparação de cartas AREA
   printf("Abaixo dados do primeiro atributo escolnhido: \n");
    printf("Nome do Pais(cidade): %s Vs %s\n", nome_1, nome_2);
   printf("Comparação de cartas (Atributo: Área):\n");
   printf("Carta 1 Área - %s: %.2f Km²\n", nome_1, area_1);
   printf("Carta 2 Área - %s: %.2f Km²\n", nome_2, area_2);
   //teste logico popupação
   if(area_1 > area_2){
    printf("Resultado: Carta 1 Área (%s) venceu!\n", nome_1);
   } else if(area_1 < area_2) {printf("Resultado: Carta 2 Área (%s) venceu!\n", nome_2);} else {printf("Jogadores Empatarão no Atributo população. \n");}
   resultado_1 = area_1 > area_2 ? nome_1 : nome_2;
   break;
    case 3:
         //Abaixo comparação de cartas PIB
    printf("Abaixo dados do primeiro atributo escolnhido: \n");
    printf("Nome do Pais(cidade): %s Vs %s\n", nome_1, nome_2);
   printf("Comparação de cartas (Atributo: PIB):\n");
   printf("Carta 1 PIB - %s: %.2f Bilhões de Reais\n", nome_1, PIB_1);
   printf("Carta 2 PIB - %s:  %.2f Bilhões de Reais\n", nome_2, PIB_2);
   //teste logico PIB
   if(PIB_1 > PIB_2){
    printf("Resultado: Carta 1 PIB ( %s) venceu!\n", nome_1);
   } else if(PIB_1 < PIB_2) {printf("Resultado: Carta 2 PIB ( %s) venceu!\n", nome_2);} else{printf("Empate No Atributo PIB");}
   resultado_1 = PIB_1 > PIB_2 ? nome_1 : nome_2;
   break;
    case 4:
         //Abaixo comparação de cartas Número de pontos turísticos
    printf("Abaixo dados do primeiro atributo escolnhido: \n");
    printf("Nome do Pais(cidade): %s Vs %s\n", nome_1, nome_2);
   printf("Comparação de cartas (Atributo: Número de pontos turísticos):\n");
   printf("Carta 1 Número de pontos turísticos - %s: %d \n", nome_1, pontos_turisticos_1);
   printf("Carta 2 Número de pontos turísticos - %s: %d \n", nome_2, pontos_turisticos_2);
   //teste logico Número de pontos turísticos
   if(pontos_turisticos_1 > pontos_turisticos_2){
    printf("Resultado: Carta 1 Número de pontos turísticos ( %s) venceu!\n", nome_1);
   } else if(pontos_turisticos_1 < pontos_turisticos_2) {printf("Resultado: Carta 2 Número de pontos turísticos ( %s) venceu!\n", nome_2);} else{printf("Empate No Atributo Número de pontos turísticos");}
   resultado_1 = pontos_turisticos_1 > pontos_turisticos_2 ? nome_1 : nome_2; 
   break;
    case 5:
         //Abaixo comparação de cartasDensidade demográfica
    printf("Abaixo dados do primeiro atributo escolnhido: \n");
    printf("Nome do Pais(cidade): %s Vs %s\n", nome_1, nome_2);
    printf("Comparação de cartas (Atributo: Densidade demográfica):\n");
   printf("Carta 1 Densidade demográfica - %s:  %.2f\n", nome_1, Densidade_Populacional_1);
   printf("Carta 2 Densidade demográfica - %s:  %.2f\n", nome_2, Densidade_Populacional2);
   //teste logico Densidade demográfica
   if(Densidade_Populacional_1 < Densidade_Populacional2){
    printf("Resultado: Carta 1 Densidade demográfica ( %s) venceu!\n", nome_1);
   } else if(Densidade_Populacional_1 > Densidade_Populacional2) {printf("Resultado: Carta 2 Densidade demográfica ( %s) venceu!\n", nome_2);} else{printf("Empate No Atributo Densidade demográfica");}
   resultado_1 = Densidade_Populacional_1 < Densidade_Populacional2 ? nome_1 : nome_2;
   break;
    default:
    printf("***********Opção Invalida!!!! ***********\n");
        break;
    }
//**********************************
    //menu comparação Segundo atributo
    printf("\n");
    printf("Escolha o Segundo Atributo Para comparação:\n");
    if(Atributo_1 == 1){printf("\n");} else{printf("1 - População\n");}
    if(Atributo_1 == 2){printf("\n");} else {("2 - Área\n");}
    if(Atributo_1 == 3){printf("\n");} else {printf("3 - PIB\n");}
    if(Atributo_1 == 4) {printf("\n");} else {printf("4 - Número de pontos turísticos\n");}
    if(Atributo_1 == 5) {printf("\n");} else {printf("5 - Densidade demográfica\n");}
    printf("Digite a opção\n");
    scanf("%d", &Atributo_2);

if (Atributo_1 == Atributo_2)
{
    printf("Você escolheu o mesmo atributo, escolha atributos diferentes! \n");
} else{
    switch (Atributo_2)
    {
    case 1:
        //Abaixo comparação de cartas POPULAÇÃO
    printf("Abaixo dados do Segundo atributo escolnhido: \n");
    printf("Nome do Pais(cidade): %s Vs %s\n", nome_1, nome_2);
   printf("Comparação de cartas (Atributo: População):\n");
   printf("Carta 1 População - %s: %d Pessoas\n", nome_1, populacao_1);
   printf("Carta 2 População - %s: %d Pessoas\n", nome_2, populacao_2);
   //teste logico popupação
   if(populacao_1 > populacao_2){
    printf("Resultado: Carta 1 População (%s) venceu!\n", nome_1);
   } else if(populacao_1 < populacao_2) {printf("Resultado: Carta 2 População (%s) venceu!\n", nome_2);} else {printf("Jogadores Empatarão no Atributo população. \n");}
   resultado_2 = populacao_1 > populacao_2 ? nome_1 : nome_2;
        break;
    case 2:
//Abaixo comparação de cartas AREA
    printf("Abaixo dados do Segundo atributo escolnhido: \n");
    printf("Nome do Pais(cidade): %s Vs %s\n", nome_1, nome_2);
   printf("Comparação de cartas (Atributo: Área):\n");
   printf("Carta 1 Área - %s: %.2f Km²\n", nome_1, area_1);
   printf("Carta 2 Área - %s: %.2f Km²\n", nome_2, area_2);
   //teste logico popupação
   if(area_1 > area_2){
    printf("Resultado: Carta 1 Área (%s) venceu!\n", nome_1);
   } else if(area_1 < area_2) {printf("Resultado: Carta 2 Área (%s) venceu!\n", nome_2);} else {printf("Jogadores Empatarão no Atributo população. \n");}
   resultado_2 = area_1 > area_2 ? nome_1 : nome_2;
   break;
    case 3:
         //Abaixo comparação de cartas PIB
    printf("Abaixo dados do Segundo atributo escolnhido: \n");
    printf("Nome do Pais(cidade): %s Vs %s\n", nome_1, nome_2);
   printf("Comparação de cartas (Atributo: PIB):\n");
   printf("Carta 1 PIB - %s: %.2f Bilhões de Reais\n", nome_1, PIB_1);
   printf("Carta 2 PIB - %s:  %.2f Bilhões de Reais\n", nome_2, PIB_2);
   //teste logico PIB
   if(PIB_1 > PIB_2){
    printf("Resultado: Carta 1 PIB ( %s) venceu!\n", nome_1);
   } else if(PIB_1 < PIB_2) {printf("Resultado: Carta 2 PIB ( %s) venceu!\n", nome_2);} else{printf("Empate No Atributo PIB");}
   resultado_2 = PIB_1 > PIB_2 ? nome_1 : nome_2;
   break;
    case 4:
         //Abaixo comparação de cartas Número de pontos turísticos
    printf("Abaixo dados do Segundo atributo escolnhido: \n");
    printf("Nome do Pais(cidade): %s Vs %s\n", nome_1, nome_2);
   printf("Comparação de cartas (Atributo: Número de pontos turísticos):\n");
   printf("Carta 1 Número de pontos turísticos - %s: %d \n", nome_1, pontos_turisticos_1);
   printf("Carta 2 Número de pontos turísticos - %s: %d \n", nome_2, pontos_turisticos_2);
   //teste logico Número de pontos turísticos
   if(pontos_turisticos_1 > pontos_turisticos_2){
    printf("Resultado: Carta 1 Número de pontos turísticos ( %s) venceu!\n", nome_1);
   } else if(pontos_turisticos_1 < pontos_turisticos_2) {printf("Resultado: Carta 2 Número de pontos turísticos ( %s) venceu!\n", nome_2);} else{printf("Empate No Atributo Número de pontos turísticos");}
   resultado_2 = pontos_turisticos_1 > pontos_turisticos_2 ? nome_1 : nome_2;
   break;
    case 5:
         //Abaixo comparação de cartasDensidade demográfica
    printf("Abaixo dados do Segundo atributo escolnhido: \n");
    printf("Nome do Pais(cidade): %s Vs %s\n", nome_1, nome_2);
   printf("Comparação de cartas (Atributo: Densidade demográfica):\n");
   printf("Carta 1 Densidade demográfica - %s:  %.2f\n", nome_1, Densidade_Populacional_1);
   printf("Carta 2 Densidade demográfica - %s:  %.2f\n", nome_2, Densidade_Populacional2);
   //teste logico Densidade demográfica
   if(Densidade_Populacional_1 < Densidade_Populacional2){
    printf("Resultado: Carta 1 Densidade demográfica ( %s) venceu!\n", nome_1);
   } else if(Densidade_Populacional_1 > Densidade_Populacional2) {printf("Resultado: Carta 2 Densidade demográfica ( %s) venceu!\n", nome_2);} else{printf("Empate No Atributo Densidade demográfica");}
   resultado_2 = Densidade_Populacional_1 < Densidade_Populacional2 ? nome_1 : nome_2;
   break;
    default:
    printf("***********Opção Invalida!!!! ***********\n");
        break;
    }}
    printf("\n");
    if ((resultado_1 == nome_1) && (resultado_2 == nome_1))
    {
       printf("O Ganhador Foi o Jogador 1, Com a carta: %s \n",nome_1);
    } else if((resultado_1 == nome_2) && (resultado_2 == nome_2)) 
    {printf("O Ganhador Foi o Jogador 2, Com a carta: %s \n",nome_2);}
    else{printf("****Jogo empatou****");}   
    
    return 0;
}
