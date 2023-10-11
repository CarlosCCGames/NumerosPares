#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int N1, N2, i, par, cont = 0;  /*Vari�veis para n�meros inteiros*/
    setlocale(LC_ALL,"Portuguese"); /*Comando para caracteres em portugues */
    printf("Exerc�cio 1 \n\n");

    printf("Escrever um programa que apresente todos os n�meros pares em um intervalo.\n");

    printf("Digite um intervalo de n�meros. \n");
    printf("Digite o primeiro n�mero: \n");
    scanf("%d", &N1);
    printf("Digite o segundo n�mero:  \n");
    scanf("%d", &N2);

    for (i=N1; i<=N2; i++) /*Loop for com in�cio no primeiro n�mero e fim no ultimo numero digitado pelo usu�rio*/
    {
        par = (N1+cont)%2; /*Verifica se o n�mero � par*/
        if(par == 0) /*condi��o para caso seja verdadeiro imprime o n�mero*/
            {
                printf("N�mero: %d \n",N1+cont);
            };
        cont++; /*contador para adinonar n�mero ao N1 */
    };

    return 0;
}
