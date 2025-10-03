#include <stdio.h>

int main(){
    int Numero, Numero2;
    int Populacao, Populacao2;
    char Estado, Estado2;
    char Codigo[4], Codigo2[4];
    char Nome[15], Nome2[15];
    float Area, Area2;
    float Pib, Pib2;
    // declaração de variaveis

    printf("Digite a letra correspondente ao estado:\n");
    scanf(" %c", &Estado); //dado espaço antes do% para retirar o enter do buffer
    
    printf("Digite o código da carta:\n");
    scanf("%4s", Codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%15s", Nome);

    printf("Digite o numero de habitantes apenas numeros:\n");
    scanf("%i", &Populacao);

    printf("Digite a área em km² apenas numeros:\n");
    scanf("%f", &Area);

    printf("Digite o pib apenas numeros:\n");
    scanf("%f", &Pib);

    printf("Digite o número de pontos turisticos:\n");
    scanf("%d", &Numero);
// solicitação e leitura de dados da carta1

    printf("Digite a letra correspondente ao estado da segunda carta:\n");
    scanf(" %c", &Estado2);//dado espaço antes do% para retirar o enter do buffer

    printf("Digite o código da carta da segunda carta:\n");
    scanf("%4s", Codigo2);

    printf("Digite o nome da cidade da segunda carta:\n");
    scanf("%15s", Nome2);

    printf("Digite o numero de habitantes apenas numeros da segunda carta:\n");
    scanf("%i", &Populacao2);

    printf("Digite a área em km² apenas numeros da segunda carta:\n");
    scanf("%f", &Area2);

    printf("Digite o pib apenas numeros da segunda carta:\n");
    scanf("%f", &Pib2);

    printf("Digite o número de pontos turisticos da segunda carta:\n");
    scanf("%d", &Numero2);
    // solicitação e leitura de dados da carta2


    printf("-----------------------------\n");
    printf("Carta 1\n");
    printf("Estado: %c\n", Estado); 
    printf("Código da carta: %s\n", Codigo);
    printf("Nome da cidade: %s\n", Nome);
    printf("População: %i\n", Populacao);
    printf("Área em km²: %f\n", Area);
    printf("Pib em bilhoes: %f\n", Pib);
    printf("Numero de pontos turisticos: %d\n", Numero);

    printf("----------------------------------------\n");
    printf("Carta 2\n");
    printf("Estado: %c\n", Estado2);
    printf("Código da carta: %s\n", Codigo2);
    printf("Nome da cidade: %s\n", Nome2);
    printf("População: %i\n", Populacao2);
    printf("Área em km²: %f\n", Area2);
    printf("Pib em bilhoes: %f\n", Pib2);
    printf("Numero de pontos turisticos: %d\n", Numero2);

//Impressao de dados coletados

return 0;

}


     
     






