#include <stdio.h>
int main() {
    int idade;
    float renda;
// if (codicao1)  {
//     if (condicao2){
// Código a ser executado se condicao1 e condicao2 forem verdadeiras

/*
programa que verifica se uma pessoa está qualificada para um ter
desconto pela idade e renda mensal.
A pessoa deve ter mais de 60 anos ou menos de 18 anos e ter
uma renda mensal abaixo de 2000*/

printf("Digite a sua idade:");
scanf("%d", &idade);
printf("Digite a sua renda mensal: ");
scanf("%f", &renda);

if (idade <= 18 || idade >=60)
{
    if(renda < 2000)
    {
        printf("Você tem direito ao desconto!\n");
    } else {
   printf("Você não tem direito ao desconto devido à sua renda!\n"); /* code */
    }

} else {
    printf("Você não tem direito aos descontos devido sua idade\n");
}


}