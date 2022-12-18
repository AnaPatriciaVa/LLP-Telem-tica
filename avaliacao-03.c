// ALUNO :ANA PATRICIA DE VASCONCELOS LIMA

// Criar funções usando a Linguagem para executar as seguintes funcionalidades:
// a) Dados de entrada (a, b, c inteiros que correspondem na função quadrática F(x) =
// ax**2 + bx + c). Pede-se as raizes da função quando Delta = 0 e Delta > 0. Quando o
// Delta for < 0 printar a mensagem "Raízes Imaginárias".
#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c , delta, x1,x2;
    float sqrtdelta, raiz_1,raiz_2;

    printf("Informe os valores de a, b e c para a equacao f(x) =ax2 +bx+c = 0\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

    delta = b*b-4*a*c;

    if (delta<0)
    {
        printf("Raizes Imaginarias");
    } else if(a == 0) {
        printf("Coeficiente 'a' invalido. Nao eh uma equacao do 2o grau.");
    } else {
        sqrtdelta = sqrt(delta);
        raiz_1 = (-b + sqrtdelta)/ (2 * a);
        raiz_2 = (-b - sqrtdelta)/ (2 * a);
        printf( "Raizes: %2f e %2f", raiz_1, raiz_2);
    }
    return 0;
}

// b) Dada uma String qualquer inverter essa String.

#include <stdio.h>

int men() {

int size;

char s1[] = " O Natal vem vindo bem vindo o Natal";

size= meu tamanho(s1);

printf( " O Tamanho da String =%d\n" ,size);

return 0;
}
