#include <stdio.h>
#include <locale.h>
//cadastro de cartas

int main() {
setlocale(LC_ALL,"");

// variaveis 
  char estado[20];
  char carta[5];
  char cidade[20];
  float pib;
  float area;
  int populacao;


  printf ("--Super Trunfo--");
  printf("\n");
//input cadastro das cartas

printf("Digite o estado: \n");
  scanf("%s", estado);

printf("Digite o código da carta: \n");
  scanf("%s", carta);

printf("Digite o Nome da cidade: \n");
  scanf("%s", cidade);

printf("Digite a Populção da cidade: \n");
  scanf("%d", &populacao);

printf("Digite Pib do esdado: \n");
  scanf("%f", &pib);

printf("Digite a Área da cidade (em km²): \n");
scanf("%f", &area);


printf("\n");
printf("--Informções da carta-- \n"); //Mensagem ao usuário. 
printf("\n");

//output

printf("Estado: %s \n", estado);
  printf("Carta: %s \n", carta);
   printf("Cidade: %s \n", cidade);
    printf("População: %d\n", populacao);
  printf("PIB: %f\n", pib);
printf("Area km²: %f\n", area);

return 0;
}
