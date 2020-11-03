#include<stdio.h>

//Problema "medidas"
//Fazer um programa para ler tr�s medidas A, B e C. Em seguida, calcular e mostrar (imprimir os dados
//com quatro casas decimais):
//a) a �rea do quadrado que tem lado A
//b) a �rea do tri�ngulo ret�ngulo que base A e altura B
//c) a �rea do trap�zio que tem bases A e B, e altura C

int main()
{
    double a, b, c, quadrado, trianguloRetangulo, trapezio;

    printf("Qual o valor de A :");
    scanf("%lf", &a);
    printf("Qual o valor de B :");
    scanf("%lf", &b);
    printf("Qual o valor de C :");
    scanf("%lf", &c);

    quadrado = a * a;
    trianguloRetangulo = (a * b)/ 2;
    trapezio = (a + b) * c / 2;

    printf("A area do quadrado e %.4lf \n", quadrado);
    printf("A area do triangulo retangulo e %.4lf \n", trianguloRetangulo);
    printf("A area do trapezio e %.4lf", trapezio);

    return 0;

}
