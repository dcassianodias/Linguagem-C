#include <stdio.h>
#include <string.h>
#include <math.h>


//Problema "retangulo"
//Fazer um programa para ler as medidas da base e altura de um retângulo. Em seguida, mostrar o valor
//da área, perímetro e diagonal deste retângulo, com quatro casas decimais, conforme exemplos.

int main()
{
    double base, altura, area, perimetro, diagonal;

    printf("Digite a base do retangulo: ");
    scanf("%lf", &base);
    printf("Digite a altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(base * base + altura * altura);

    printf("Area: %.4lf\n", area);
    printf("Perimetro: %.4lf\n", perimetro);
    printf("Diagonal: %.4lf\n", diagonal);

    return 0;
}
