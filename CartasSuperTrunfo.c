#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){


// declaração de variaveis
setlocale(LC_ALL, "Portuguese_Brazil");
char estado1[1],codigocarta1[4],cidade1[20], estado2[1],codigocarta2[4],cidade2[20];
int numcarta1, populacao1, pontotur1, numcarta2, populacao2, pontotur2;
float areakm1, pib1, areakm2, pib2;
// entrada de dados
//carta 1
printf("Bem vindos. Vamos realizar o cadastro das cartas:\n");



printf("Digite o número da sua carta: ");
scanf("%i", &numcarta1);
printf("Digite o estado da sua carta:");
scanf("%s", &estado1);
printf("Digite o código da sua carta:");
scanf("%s", &codigocarta1);
printf("Digite o nome da cidade: ");
scanf("%s",&cidade1);
printf("Digite a quantidade de pontos turísticos da cidade: ");
scanf("%d", &pontotur1);
printf("Digite a população da cidade: ");
scanf("%i", &populacao1);
printf("Digite a Area da cidade(km²): ");
scanf("%.2f",&areakm1);
printf("Digite o valor do Produto Interno Bruto(PIB) da cidade em bilhões: ");
scanf("%f",&pib1);


//carta2
printf("vamos digitar a próxima carta:\n");
printf("Digite o número da sua carta: ");
scanf("%i", &numcarta2);
printf("Digite o estado da sua carta:");
scanf("%s", &estado2);
printf("Digite o código da sua carta:");
scanf("%s", &codigocarta2);
printf("Digite o nome da cidade: ");
scanf("%s",&cidade2);
printf("Digite a população da cidade: ");
scanf("%i", &populacao2);
printf("Digite a Area da cidade(km²): ");
scanf("%f", &areakm2);
printf("Digite o valor do Produto Interno Bruto(PIB) da cidade em bilhões: ");
scanf("%f", &pib2);
printf("Digite a quantidade de pontos turísticos da cidade: ");
scanf("%i", &pontotur2);
//lendo os dados - carta 1
printf("Carta: %i\n",numcarta1);
printf("Estado: %s\n",estado1);
printf("Código: %s\n",codigocarta1);
printf("Nome da cidade: %s\n", cidade1);
printf("População: %i\n",populacao1);
printf("Área: %f Km²\n",areakm1);
printf("PIB %.2f bilhões de reais\n",pib1);
printf("Números de pontos turísticos: %d\n",pontotur1);
// carta 2 
printf("Carta: %i\n",numcarta2);
printf("Estado: %s\n",estado2);
printf("Código: %s\n",codigocarta2);
printf("Nome da cidade: %s\n", cidade2);
printf("População: %i\n",populacao2);
printf("Área: %f Km²\n",areakm2);
printf("PIB %.2f bilhões de reais\n",pib2);
printf("Números de pontos turísticos: %i \n",pontotur2);

return 0;


}
