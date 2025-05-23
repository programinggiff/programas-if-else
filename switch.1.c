#include <stdio.h>
int main(){
    int opcao;
    float saldo = 1000;

    printf("Escolha uma opção:\n");
    printf("1. Verifique o saldo\n");
    printf("2. Fazer depósito\n");
    printf("3. Fazer saque\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
    printf("O seu saldo é: R$ %f\n", saldo);
    }














    return 0;
}