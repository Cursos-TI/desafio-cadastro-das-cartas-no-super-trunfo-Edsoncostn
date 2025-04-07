#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.


int main() {
    //criei varivéis referente a cada uma das informações das cartas.
    char estado, estado2; // inicial do estado.
    char Codigo1[4];      // código da carta.
    char Cidade1[50];     // nome da cidade.
    unsigned long int Habitantes1, Habitantes2; // número de habitantes.
    float Area1, Area2;          // tamanho da Cidade.
    float PIB1, PIB2;           // seu PIB.
    int Pontos1, Pontos2;          // e o Número de pontos turísticos.
    char Codigo2[4];      // usei números para diferenciar a primeira carta e a segunda carta, 1 para primeira e 2 para a segunda.
    char Cidade2[50];
    float PIBperCapita1, PIBperCapita2; // variáveis para armazenar o PIB per capita de cada cidade.
    float DensidadeDemografica1, DensidadeDemografica2, Inverso_DensidadeDemografica1, Inverso_DensidadeDemografica2, SuperPoder1, SuperPoder2; // variáveis para armazenar a densidade demográfica de cada cidade , inverso da densidade demográfica e o super poder.
   

    printf("Bem-Vindo ao Super Trunfo\n"); // usei printf para guiar o usuário e imprimir informações.
    printf("para começar, iremos cadastrar duas Cidades como cartas\n");  
    printf("Carta 1:\n");  // ínicio do cadastro da primeira carta.

    printf("Digite a inicial do Estado, de A-H:\n"); 
    scanf(" %c", &estado); // scanf irá guardar informação que o usuário irá digitar para a variavél 'estado' do tipo 'char', '%c' receberá o valor atribuido e irá imprimir quando chamado pelo printf.
    

    printf("agora crie um código para a carta, comece com a Incial do Estado,e depois finalize com um número de 01 a 04:\n");
    scanf("%s",Codigo1);   // foi usado '%s' pois a variavél referente é do tipo 'char' 'string'.

    printf("digite o nome da Cidade:\n");
    scanf("%s",Cidade1);   

    printf("digite o número de habitantes da Cidade:\n");
    scanf("%lu", &Habitantes1); // foi usado '%lu' porque a variavél referente é do tipo 'unsigned long int', receberá valores longos inteiros e sem sinal.

    printf("agora digite a área da cidade em km^2:\n");
    scanf("%f",&Area1);   // '%f' pois nesse caso a variavél referente é do tipo "float", receberá valores decimais.

    printf("quase acabando! agora digite o PIB da Cidade, não precisa ser exato:\n");  
    scanf("%f", &PIB1); 
    
    printf("por último, digite o número de pontos turísticos:\n");
    scanf("%d", &Pontos1);  // finalizando o cadastro da primeira carta.

    printf("pronto, terminamos o cadastro da primeira carta, agora vamos para o cadastro da segunda carta!\n")   ;
    printf("Carta 2:\n"); // início do cadastramento da segunda carta.

    printf("Digite a inicial do Estado, de A-H:\n");
    scanf(" %c", &estado2);

    printf("agora crie um código para a carta, começe com a Incial do Estado,e depois finalize com um número de 01 a 04:\n");
    scanf("%s",Codigo2);

    printf("digite o nome da Cidade:\n");
    scanf("%s",Cidade2);

    printf("digite o número de habitantes da Cidade:\n");
    scanf("%lu", &Habitantes2);

    printf("agora digite a área da cidade em km^2:\n");
    scanf("%f",&Area2);

    printf("quase acabando! agora digite o PIB da Cidade, não precisa ser exato:\n");  
    scanf("%f", &PIB2);

    printf("por último, digite o número de pontos turísticos:\n");
    scanf("%d", &Pontos2); //finalizando o cadastro da segunda carta.

    printf("pronto, terminamos o cadastro das cartas!\n")   ;

    //após o cadastro, será calculado o PIB per capita, o super poder, a densidade demográfica e seu inverso para cada cidade.

    PIBperCapita1 = (float) PIB1 / Habitantes1; // cálculo do PIB per capita da primeira cidade.
    PIBperCapita2 = (float) PIB2 / Habitantes2; // cálculo do PIB per capita da segunda cidade.

    DensidadeDemografica1 = (float) Habitantes1 / Area1; // cálculo da densidade demográfica da primeira cidade.
    DensidadeDemografica2 = (float) Habitantes2 / Area2; // cálculo da densidade demográfica da segunda cidade. DensidadeDemografica1 = (float) Habitantes1 / Area1; // cálculo da densidade demográfica da primeira cidade.

    Inverso_DensidadeDemografica1 = (float) 1 / DensidadeDemografica1; // cálculo do inverso da densidade demográfica da primeira cidade.
    Inverso_DensidadeDemografica2 = (float) 1 / DensidadeDemografica2; // cálculo do inverso da densidade demográfica da segunda cidade.

    SuperPoder1 = (float) Habitantes1 + Area1 + PIB1 + Pontos1 + PIBperCapita1 + Inverso_DensidadeDemografica1; // cálculo do super poder da primeira cidade.

    SuperPoder2 = (float) Habitantes2 + Area2 + PIB2 + Pontos2 + PIBperCapita2 + Inverso_DensidadeDemografica2; // cálculo do super poder da segunda cidade.

    //apresentação das cartas registradas para o usuário.

    printf("a seguir, informações das cartas criadas...\n");
    printf("\nCarta 1: \n"); 
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", Codigo1); 
    printf("Nome da cidade:%s,\n", Cidade1);
    printf("Número de habitantes: %lu, \n", Habitantes1);
    printf("Área:%.3f,\n", Area1);
    printf("PIB: %.3f,\n", PIB1); 
    printf("Número de Pontos Turistico:%d \n", Pontos1);
    printf("PIB per capita: %.2f\n", PIBperCapita1);
    printf("Densidade demográfica: %.2f\n", DensidadeDemografica1);
    printf("O Super Poder da Cidade é: %2.f \n", SuperPoder1);

    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", Codigo2); 
    printf("Nome da cidade:%s,\n", Cidade2);
    printf("Número de habitantes: %lu, \n", Habitantes2);
    printf("Área:%.3f,\n", Area2);
    printf("PIB: %.3f,\n", PIB2); 
    printf("Número de Pontos Turistico:%d \n", Pontos2);
    printf("PIB per capita: %.2f\n", PIBperCapita2);
    printf("Densidade demográfica: %.2f\n", DensidadeDemografica2);
    printf("O Super Poder da Cidade é: %2.f \n", SuperPoder2);

    /* 
    A seguir, iremos comparar ambas as cartas, e será atribuido 1 ponto para carta que tiver o maior valor em cada atributo e 0 para a carta que tiver o menor valor.

    No entanto a carta que tiver menor valor em Densidade demográfica, receberá 1 ponto, e a carta que tiver maior valor em Densidade demográfica receberá 0 pontos.

    se ambas as cartas tiverem o mesmo valor em algum atributo, ambas as cartas receberão pontos.

    A carta que tiver mais pontos no final, será a vencedora.
    */

    int PIB1xPIB2 = PIB1 >= PIB2;
    int PIB2xPIB1 = PIB2 >= PIB1;

    int Habitantes1xHabitantes2 = Habitantes1 >= Habitantes2;
    int Habitantes2xHabitantes1 = Habitantes2 >= Habitantes1;

    int Area1xArea2 = Area1 >= Area2;
    int Area2xArea1 = Area2 >= Area1; 

    int Pontos1xPontos2 = Pontos1 >= Pontos2;
    int Pontos2xPontos1 = Pontos2 >= Pontos1;

    int PIBperCapita1xPIBperCapita2 = PIBperCapita1 >= PIBperCapita2;
    int PIBperCapita2xPIBperCapita1 = PIBperCapita2 >= PIBperCapita1;

    int Densidade1xDensidade2 = DensidadeDemografica1 <= DensidadeDemografica2;
    int Densidade2xDensidade1 = DensidadeDemografica2 <= DensidadeDemografica1;

    int Poder1xPoder2 = SuperPoder1 >= SuperPoder2;
    int Poder2xPoder1 = SuperPoder2 >= SuperPoder1;

    int ScoreCarta1 = Habitantes1xHabitantes2 + Area1xArea2 + PIB1xPIB2 + Pontos1xPontos2 + PIBperCapita1xPIBperCapita2 + Densidade1xDensidade2 + Poder1xPoder2; // soma dos pontos da carta 1.

    int ScoreCarta2 = Habitantes2xHabitantes1 + Area2xArea1 + PIB2xPIB1 + Pontos2xPontos1 + PIBperCapita2xPIBperCapita1 + Densidade2xDensidade1 + Poder2xPoder1; // soma dos pontos da carta 2.

    printf("\nAgora iremos comparar as cartas:\n");
    printf("Cada carta irá receber 1 ponto por atributo superior ao da outra.\n");
    printf("se houver empate, ambas as cartas receberão 1 ponto.\n");
    printf("A carta que tiver mais pontos no final, será a vencedora.\n");

    printf("\nA seguir, atribuiremos os pontos:\n");
    
    printf("\nCarta 1: %s\n", Cidade1);
    printf("Número de Habitantes: %d\n", Habitantes1xHabitantes2);
    printf("Área: %d\n", Area1xArea2);
    printf("PIB: %d\n", PIB1xPIB2);
    printf("Número de Pontos Turístico: %d\n", Pontos1xPontos2);
    printf("PIB per capita: %d\n", PIBperCapita1xPIBperCapita2);
    printf("Densidade demográfica: %d\n", Densidade1xDensidade2);
    printf("Super Poder: %d\n", Poder1xPoder2);

    printf("\nTotal de pontos: %d\n", ScoreCarta1);

    printf("\nCarta 2: %s\n", Cidade2);
    printf("Número de Habitantes: %d\n", Habitantes2xHabitantes1);
    printf("Área: %d\n", Area2xArea1);
    printf("PIB: %d\n", PIB2xPIB1);
    printf("Número de Pontos Turístico: %d\n", Pontos2xPontos1);
    printf("PIB per capita: %d\n", PIBperCapita2xPIBperCapita1);
    printf("Densidade demográfica: %d\n", Densidade2xDensidade1);
    printf("Super Poder: %d\n", Poder2xPoder1);

    printf("\nTotal de pontos: %d\n", ScoreCarta2);
    
    printf("\nObrigado pela participação!\n");
    return 0;
}
