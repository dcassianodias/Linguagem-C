#include <stdio.h>
#include <math.h>

//Problema "soma"
//Fazer um programa para ler dois valores inteiros X e Y, e depois mostrar na tela o valor da soma
//destes números.

int main(){

    int x, y, soma;

    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    soma = x + y;

    printf("O valor da soma e %d", soma);
}
