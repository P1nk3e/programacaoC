#include <stdio.h>

int main(){

    char estado, codigo[10], cidade[50];
    int populacao, turistica;
    float area, pib, densidade,percapita;
    char estado3, codigo2[10], cidade2[50];
    int populacao2, turistica2;
    float area2, pib2, densidade2, percapita2;
    

    printf("Carta 1 - Digite a letra do estado: \n");
    scanf("%c", &estado);

    printf("Digite o codigo do estado: \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a populacao da cidade: \n");
    scanf("%i", &populacao);

    printf("Digite a area da cidade \n");
    scanf("%f", &area);

    printf("Digite o pib: \n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%i", &turistica);

  
	

	
	
	printf("Carta 2 - Digite a letra do estado: \n");
    scanf(" %c", &estado3);

    printf("Digite o codigo do estado: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a populacao da cidade: \n");
    scanf("%i", &populacao2);

    printf("Digite a area da cidade \n");
    scanf("%f", &area2);

    printf("Digite o pib: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%i", &turistica2);

    densidade = (float)(populacao / area);
    percapita = (float)(pib / populacao);
    
    densidade2 = (float)(populacao2 / area2);
    percapita2 = (float)(pib2 / populacao2);

    
    
    printf("\n");
    printf("CARTA 1\n");
	printf("Letra do estado: %c\n", estado);
    printf("Codigo do estado: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("Populacao da cidade: %i\n", populacao);
    printf("Area: %f\n", area);
    printf("Pib: %f\n", pib);
    printf("Pontos turisticos: %d\n", turistica);
    printf("A densidade populacional é: %f\n", densidade);
    printf("O pib per capita é: %f\n", percapita);
    
    printf("\n");
    printf("CARTA 2\n");
	printf("Letra do estado: %c\n", estado3);
    printf("Codigo do estado: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao da cidade: %i\n", populacao2);
    printf("Area: %f\n", area2);
    printf("Pib: %f\n", pib2);
    printf("Pontos turisticos: %d\n", turistica2);
    printf("A densidade populacional é: %f\n", densidade2);
    printf("O pib per capita é: %f\n", percapita2);


    if (populacao > populacao2)
     printf("População: Carta 1 ganhou\n");
    else
     printf("População: Carta 2 ganhou\n"); 

    if (area > area2)
     printf("Area: Carta 1 ganhou\n");
    else
     printf("Area: Carta 2 ganhou\n");
     
    if (pib > pib2)
     printf("PIB: Carta 1 ganhou\n");
    else
     printf("PIB: Carta 2 ganhou\n");

    if (turistica > turistica2)
     printf("Ponto turistico: Carta 1 ganhou\n");
    else
     printf("Ponto turistico: Carta 2 ganhou\n");

     if (densidade < densidade2)
     printf("Densidade: Carta 1 ganhou\n");
    else
     printf("Densidade: Carta 2 ganhou\n");
     
     if (percapita > percapita2)
     printf("PIB Percapita: Carta 1 ganhou\n");
    else
     printf("PIB Percapita: Carta 2 ganhou\n"); 

     


    return 0;
}