#include <stdio.h>
int main() {
    char variavel;

    printf("Digite um número\n");
    scanf("%s", &variavel);

    switch (variavel) {
    case 'a':
    printf("Código a ser excutado se varíavel == a\n");
    printf("Teste do case a");
    break;
    case 'b':
    printf("Código a ser executado se vaíavel == b\n");
    break;
    default:
    printf("Código a ser executado a variavel não for a ou b\n");  
    }















   return 0;
}