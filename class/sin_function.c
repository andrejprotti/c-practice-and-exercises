#include <stdio.h>

float fatorial(float x);
float seno(float angulo, int termos);
float exponencial(float numero, int fator);

int main(int argc, char *argv[])
{
    float teste = seno(3,10);

    printf("Resultado: %f", teste);

    return 0;
}

float fatorial(float x)
{
    if (x == 1){
        return 1.0;
    }
    else {
        return (x * fatorial(x - 1));
    }
}

float exponencial(float numero, int fator){
    float resultado = 1;
    for (int i = 0; i < fator; i++)
    {
        resultado *= numero;
    }
    return resultado;
}

//Parameters = angle and precision as dictated by the amount of terms in the summation
float seno(float angulo, int termos){

    float soma = 0;

    float i = 2;

    for (int n = 1; n < (termos*2.0); n+=2){
        soma += ((exponencial(-1,i)) * ((exponencial(angulo,n)/fatorial(n))));
        i++;
    }

    return soma;
}