#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //criei varivéis referente a cada uma das informações das cartas.
    char estado, estado2; // inicial do estado.
    char Codigo1[4];      // código da carta.
    char Cidade1[50];     // nome da cidade.
    int Habitantes1, Habitantes2;      // número de habitantes.
    float Area1, Area2;          // tamanho da Cidade.
    float PIB1, PIB2;           // seu PIB.
    int Pontos1, Pontos2;          // e o Número de pontos turísticos.
    char Codigo2[4];      // usei números para diferenciar a primeira carta e a segunda carta, 1 para primeira e 2 para a segunda.
    char Cidade2[50];
   

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
    scanf("%d", &Habitantes1); // foi usado '%d' porque a variavél referente é do tipo 'int', receberá valores inteiros.

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
    scanf("%d", &Habitantes2);

    printf("agora digite a área da cidade em km^2:\n");
    scanf("%f",&Area2);

    printf("quase acabando! agora digite o PIB da Cidade, não precisa ser exato:\n");  
    scanf("%f", &PIB2);

    printf("por último, digite o número de pontos turísticos:\n");
    scanf("%d", &Pontos2); //finalizando o cadastro da segunda carta.

    printf("pronto, terminamos o cadastro das cartas!\n")   ;

    //apresentação das cartas registradas para o usuário.

    printf("a seguir, informações das cartas criadas...\n");
    printf("\nCarta 1: \n"); 
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", Codigo1); 
    printf("Nome da cidade:%s,\n", Cidade1);
    printf("Número de habitantes: %d, \n", Habitantes1);
    printf("Área:%f,\n", Area1);
    printf("PIB: %f,\n", PIB1); 
    printf("Número de Pontos Turistico:%d \n", Pontos1);
  
    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", Codigo2); 
    printf("Nome da cidade:%s,\n", Cidade2);
    printf("Número de habitantes: %d, \n", Habitantes2);
    printf("Área:%f,\n", Area2);
    printf("PIB: %f,\n", PIB2); 
    printf("Número de Pontos Turistico:%d \n", Pontos2);
    
    printf("\nObrigado pela participação!\n");
    return 0;
}
