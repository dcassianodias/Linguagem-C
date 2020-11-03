#include <stdio.h>
#include <math.h>

//Fazer um programa para calcular o troco no processo de pagamento de um produto
//de uma mercearia. O programa deve ler o preço unitário do produto, a quantidade
//de unidades compradas deste produto, e o valor em dinheiro dado pelo cliente
//(suponha q haja dinheiro suficiente). Programa deve mostrar o valor do troco
// a ser devolvido ao cliente.

int main()
{
    double preco, dinheiro, troco;
    int quantidade;

    printf("Quantos produtos foram comprados? ");
    scanf("%d", &quantidade);
    printf("Qual o preco do produto? ");
    scanf("%lf", &preco);
    printf("Quanto o cliente pagou? ");
    scanf("%lf", &dinheiro);

    troco = dinheiro - (quantidade * preco);

    printf("O cliente comprou %d produtos, pagou %.2lf e o troco devolvido foi de %.2lf", quantidade, dinheiro, troco);

    return 0;
}
