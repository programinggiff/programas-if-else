#include <stdio.h>
int main(){
    int opcao;
    float saldo = 1000.00;

    printf("Escolha uma opção:\n");
    printf("1. Verifique o saldo\n");
    printf("2. Fazer depósito\n");
    printf("3. Fazer saque\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
    printf("O seu saldo é: R$ %f\n", saldo);
    break;
    case 2:
    printf("Digite o banco que voce deseja depositar\n");
    printf("Digite a ágencia que você deseja depositar\n");
    printf("Digite a conta que você deseja depositar\n");
    break;
    case 3:
    printf("Digite o valor a sacar\n");
    break;
    default:
    printf("opção invalida!\n");
    break;





    }














    return 0;
}