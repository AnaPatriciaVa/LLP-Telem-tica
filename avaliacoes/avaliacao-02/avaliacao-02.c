#include <stdio.h>

int main() {
  int i;

  printf("Questão 1 - a) Qual a diferença entre o while e o do .. while;  \n\n");
  printf("R.: O Do While e  While tem quase a mesmo funcionamento , a diferença é que o Do While, com o uso dele teremos os comandos executados ao menos uma única vez.\n\n");
  
  printf("Questão 1 - item b:\n");
  for ( i=0; i<=100; i++) {
    if ((i% 5 ==0) && (i% 2 ==0)) {
      printf("%d\n",i);
    }  
  }

  printf("\nQuestão 2 - item a:\n");
  i=-1;
  while ( i<100){
    i++;
    if(i %4 !=0) {
      continue;
    } else {
      printf( "%d\n",i);
    }
  }
  return 0;
}
