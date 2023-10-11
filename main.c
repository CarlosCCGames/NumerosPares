#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int N1, N2, i, par, cont = 0;  /*Variáveis para números inteiros*/
    setlocale(LC_ALL,"Portuguese"); /*Comando para caracteres em portugues */
    printf("Exercício 1 \n\n");

    printf("Escrever um programa que apresente todos os números pares em um intervalo.\n");

    printf("Digite um intervalo de números. \n");
    printf("Digite o primeiro número: \n");
    scanf("%d", &N1);
    printf("Digite o segundo número:  \n");
    scanf("%d", &N2);

    for (i=N1; i<=N2; i++) /*Loop for com início no primeiro número e fim no ultimo numero digitado pelo usuário*/
    {
        par = (N1+cont)%2; /*Verifica se o número é par*/
        if(par == 0) /*condição para caso seja verdadeiro imprime o número*/
            {
                printf("Número: %d \n",N1+cont);
            };
        cont++; /*contador para adinonar número ao N1 */
    };

    return 0;
}
