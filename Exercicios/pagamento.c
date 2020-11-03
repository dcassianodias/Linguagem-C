#include<stdio.h>
#include<string.h>

//Problema "pagamento"
//Fazer um programa para ler o nome de um(a) funcionário(a), o valor que ele(a) recebe por hora, e a
//quantidade de horas trabalhadas por ele(a). Ao final, mostrar o valor do pagamento do funcionário
//com uma mensagem explicativa, conforme exemplo.

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
    char nome[50];
    double valorHora, pagamento;
    int horasTrabalhadas;

    printf("Digite o nome do funcionario: ");
    ler_texto(nome,50);
    printf("Informe o valor por hora: ");
    scanf("%lf", &valorHora);
    printf("Digite as horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    pagamento = valorHora * horasTrabalhadas;

    printf("O pagamento para %s deve ser %.2lf", nome, pagamento);

    return 0;
}
