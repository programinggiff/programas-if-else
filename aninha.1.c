#include <stdio.h>
int main(){

    int idade;
    float renda;
    int dependentes;

    // A primeira condição idade do usuário está entre 18 e 65 anos.
    // A segunda condição a renda do usuário deve ser menor que 3000.
    // A terceira condição veificar se o número de dependentes é maior que 2.

    printf("Digite a sua idade:");
    scanf("%d", &idade);
    printf("digite sua renda mensal: ");
    scanf("%f", &renda);
    printf("Digite o números de dependentes: ");
    scanf("%d", &dependentes);

    if(idade >= 18 && idade < 65){
       if (renda < 3000){
        if(dependentes >2)
        {
          printf("Você atente a todos os critérios\n");
        } else {
          printf("Você nao atende ao dependente\n");
        }

      }else{
        printf("Voçê não atente ao critério renda\n ");

      }
        
    } else{
        printf("Você não atende ao critério idade!\n");
    }









}
