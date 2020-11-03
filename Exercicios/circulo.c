#include <stdio.h>
#include<conio.h>
#define Pi 3.14

//Fazer um programa para ler o valor "r" do raio de um círculo, e depois mostrar o valor da área do
//círculo com três casas decimais. A fórmula da área do círculo é a seguinte: 𝑎𝑟𝑒𝑎 = 𝜋. 𝑟2. Você pode usar
//o valor de 𝜋 fornecido pela biblioteca da sua linguagem de programação, ou então, se preferir, use
//diretamente o valor 3.14159.

int main()
{
    double r, area;

    printf("Digite o valor do raio: ");
    scanf("%lf", &r);

    area = Pi * r * r;

    printf("AREA = %lf", &area);

    getch();

    return 0;
}
