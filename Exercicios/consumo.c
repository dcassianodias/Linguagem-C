#include<stdio.h>

//Problema "consumo"
//Fazer um programa para ler a dist�ncia total (em km) percorrida por um carro, bem como o total de
//combust�vel gasto por este carro ao percorrer tal dist�ncia. Seu programa deve mostrar o consumo
//m�dio do carro, com tr�s casas decimais.

int main()
{
    double distancia, combustivel, consumo;

    printf("Distancia total percorrida: ");
    scanf("%lf", &distancia);
    printf("Total de combustivel gasto: ");
    scanf("%lf", &combustivel);

    consumo = distancia/combustivel;

    printf("O consumo medio foi de %.3lf km", consumo);

    return 0;
}
