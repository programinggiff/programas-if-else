#include <stdio.h>

int main(){

    int idade = 17;
    float altura = 1.75;

    //idade >= 18 => falso
    //idade <=30 => verdadeiro
    //Falso && Verdadeira
    //Falso && altura > 1.70
    //Falso && Verdadeiro => Falso.

    if (idade >= 18 && idade <= 30 && altura > 1.70) {
        printf("Você está na faixa etária e tem a altura adequada\n");
    } else {
        printf(" Você não atende aos criterios\n");
    }

    




}