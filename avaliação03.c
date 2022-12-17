// ALUNO :ANA PATRICIA DE VASCONCELOS LIMA

// Criar funções usando a Linguagem para executar as seguintes funcionalidades:
// a) Dados de entrada (a, b, c inteiros que correspondem na função quadrática F(x) =
// ax**2 + bx + c). Pede-se as raizes da função quando Delta = 0 e Delta > 0. Quando o
// Delta for < 0 printar a mensagem "Raízes Imaginárias".
#include <;
#include <studio.h>
Int main ( )

float a,b,c , delta, x1,x2;

sqrtdelta
raiz 1,raiz 2;

printf ("f(x) =ax2 +bx+c = 0\n ");

printf ("a = 1"); scanf("%f",&a);

print f("b = 4"); scanf("%f" ,&b);

printf ("c = 2"),;scanf("%f",&c);

if(a! =0);

{
delta = b*b) -(4**a*c");

if(delta>=0);
{

delta =b*b-4*a*c;

if(delta<0)

raiz1=(-b + sqrtdelta)/ (2 * a);
raiz2=(-b - sqrtdelta)/ (2 * a);
printf( "Raizes :%2f e %2f", raiz 1, raiz2);

}
else
{
delta=-delta;
sqrtdelta=sqrt(delta);
printf("Raiz1:%2f+i. %2\n",(-b)/(2*a),(sqrtdelta)/(2*a));

printf("Raiz2:%2f-i. %2f\n",(-b)/(2*a),(sqrtdelta)/(2*a));
}
, else

printf("Coeficiente 'a' inválido, Não é uma eguação do 2ograu");
}

return 0;
}

b) Dada uma String qualquer inverter essa String.

#include <stdio.h>

int men() {

int size;

char s1[] = " O Natal vem vindo bem vindo o Natal";

size= meu tamanho(s1);

printf( " O Tamanho da String =%d\n" ,size);

return 0;
}
