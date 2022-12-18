// LLP - Avaliação 6 - Faça um programa que armazene dados na memória (use um array) depois grave
// esses dados em um arquivo.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAMANHO 100

int main() {
FILE* fp;
int numeros[TAMANHO];

for(i = 0; i < TAMANHO; i++)
{
numeros[i] = i+1;
}

if((fp = fopen("arquivo.txt", "w"))==NULL)
{
printf("O arquivo não pôde ser aberto.\n");
exit(1);
}

for (i = 0; i < TAMANHO; i++)
{
fprintf(fp, "%d\n", numeros[i]);
}

fclose(fp);

printf("Arquivo criado com sucesso.");

return 0;
}
