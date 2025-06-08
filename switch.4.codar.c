#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int escolhaJogador, escolhaComputador;
srand(time(0));

printf("***Jogo de Jokrnpô\n");
printf("Escolha uma opção:\n");
printf("1. Pedra\n");
printf("2. Papel\n");
printf("3. Tesoura\n");
printf("Escolha: ");
scanf("%d", &escolhaJogador);
