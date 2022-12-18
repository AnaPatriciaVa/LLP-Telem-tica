// Implemente um programa na linguagem C que faça as seguintes funcionalidades:
// 1) Dada uma Matriz Quadrada m que é passada para uma função soma_linha( m, slinha, n)
// onde slinha é um array e n é o tamanho da matriz quadrada. Calcular a soma dos elementos
// de cada linha da matriz m(i,j) e armazenar a soma no array slinha (i)

// Soma de Matrizes
#include <stdio.h>
void f_soma(int n, int m1[n][n], int m2[n][n], int s1[n][n])
{
for(int i = 0; i < n; i++) {
for(int j = 0; j < n; j++) {
s1[i][j] = m1[i][j] + m2[i][j];
}
}
}
void f_imprime_matriz(int n, int m[n][n])
{
for(int i = 0; i < n; i++) {
for(int j = 0; j < n; j++) {
printf("%2d", m[i][j]);
if(j < n - 1) printf(" ");
}
printf("\n");
}
}

#define TAMANHO 3
int main()
{
int m1[TAMANHO][TAMANHO] = {{2, 3, 4},

{4, 6, 8},
{5, 7, 9}
};

int m2[TAMANHO][TAMANHO] = {{3, 2, 1},

{6, 2, 3},
{5, 1, 4}
};

int s1[TAMANHO][TAMANHO];
f_soma(TAMANHO, m1, m2, s1);
printf("Matriz M1\n");
f_imprime_matriz(TAMANHO, m1);
printf("\nMatriz M2\n");
f_imprime_matriz(TAMANHO, m2);
printf("\nMatriz S1\n");
f_imprime_matriz(TAMANHO, s1);
return 0;
