#include<stdio.h>

//Problema "consumo"
//Fazer um programa para ler a distância total (em km) percorrida por um carro, bem como o total de
//combustível gasto por este carro ao percorrer tal distância. Seu programa deve mostrar o consumo
//médio do carro, com três casas decimais.

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
