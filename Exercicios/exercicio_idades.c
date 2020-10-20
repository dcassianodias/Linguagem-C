#include <stdio.h>
#include <string.h>
#include <math.h>

//Problema "idades"
//Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os
//nomes e a idade média entre essas pessoas, com uma casa decimal, conforme exemplo.

void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
fgets(buffer, length, stdin);
strtok(buffer, "\n");
}

int main()
{
    char nome1[20], nome2[20];
    int idade1, idade2;
    double media;

    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    ler_texto(nome1, 20);
    printf("Idade: ");
    scanf("%d", &idade1);

    printf("Dados da segunda pessoa:\n ");
    printf("Nome: ");
    limpar_entrada();
    ler_texto(nome2, 20);
    printf("Idade: ");
    scanf("%d", &idade2);

    media = (idade1 + idade2)/2;

    printf("A media de idades entre %s, e %s, e %.1lf", nome1, nome2, media);

    return 0;

}
