🏅 Nível Novato

#include <stdio.h>

    int
    main()
{
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

  if (populacao > 1000)
  {
    printf("Esse estado possui muitas pessoas\n");
  }
  else
  {
    printf("Esse estado possui poucas pessoas\n");
  }

  if (area > 10000)
  {
    printf("Esse estado é grande\n");
  }
  else
  {
    printf("Esse estado é pequeno\n");
  }

  if (pib > 500)
  {
    printf("O PIB é alto\n");
  }
  else
  {
    printf("O PIB é baixo\n");
  }
}

🏅 Nível Aventureiro

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int
    main()
{
  char nome[];
  int populacao;
  float area;
  float pib;
  srand(time(0));

  printf("Informe o nome do estado: \n");
  scanf("%s", nome);
  getchar();

  printf("Informe a população: \n");
  scanf("%d", &populacao);
  printf("Informe a área: \n");
  scanf("%f", &area);
  printf("Informe o PIB: \n");
  scanf("%f", &pib);

  nome = rand() % 3 + 1;

  switch (nome)
  {
  case 1:
    printf("Rio de Janeiro\n");
    break;
  case 2:
    printf("São Paulo\n");
    break;
  case 3:
    printf("Rio Grande do Sul\n");
    break;
  }

  if (nome == 1)
  {
    printf("Esse estado possui muitas pessoas\n");
  }
  else if (nome == 2)
  {
    printf("Esse estado é grande\n");
  }
  else if (nome == 3)
  {
    printf("Esse estado tem o maior PIB\n");
  }
  else
  {
    printf("Esse estado não possui uma categoria específica\n");
  }
}

🏅 Nível Mestre

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int
    main()
{
  char nome[];
  int populacao;
  float area;
  float pib;
  srand(time(0));
  nome = rand() % 3 + 1;

  printf("Bem-vindo ao jogo Desafio Super Trunfo - Países - Comparação das Cartas\n");
  printf("Você deve escolher uma carta que representa um estado\n");
  printf("RJ. Rio de Janeiro\n");
  printf("SP. São Paulo\n");
  printf("RS. Rio Grande do Sul\n");

  printf("Digite seu número (entre 1 e 3): ");
  scanf("%d", &nome);

  switch (nome)
  {
  case 'RJ':
    printf("Esse estado possui muitas pessoas\n");
    resultado = nome > populacao ? 1 : 0;
    printf("O número do computador é: %d e o do jogador é: %d\n", numeroComputador, numeroJogador);
    break;
  case 'SP':
    printf("Esse estado é grande\n");
    resultado = nome > area ? 1 : 0;
    break;
  case 'RS':
    printf("Esse estado tem o maior PIB\n");
    resultado = nome > pib ? 1 : 0;
    break;
  default:
    printf("Esse estado não possui uma categoria específica\n");
    break;
  }

  if (resultado == 1)
  {
    printf("Parabéns, você acertou!\n");
  }
  else
  {
    printf("Infelizmente, você errou.\n");
  }
}