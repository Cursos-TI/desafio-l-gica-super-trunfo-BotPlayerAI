🏅 Nível Novato

#include <stdio.h>

int main() {
  char nome[];
  int populacao;
  float area;
  float pib;

  printf("Informe o nome do estado: \n");
  scanf("%s", nome);
  getchar();
  
  printf("Informe a população: \n");
  scanf("%d", &populacao);
  printf("Informe a área: \n");
  scanf("%f", &area);
  printf("Informe o PIB: \n");
  scanf("%f", &pib);

  if(populacao > 1000){
    printf("Esse estado possui muitas pessoas\n");
  } else {
    printf("Esse estado possui poucas pessoas\n");
  }

  if(area > 10000){
    printf("Esse estado é grande\n");
  } else {
    printf("Esse estado é pequeno\n");
  }

  if(pib > 500){
    printf("O PIB é alto\n");
  } else {
    printf("O PIB é baixo\n");
  }
}