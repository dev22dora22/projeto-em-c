#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Qual tabuada voce quer?"); //* Escreva um programa que pe�a um inteiro ao usu�rio, e com esse inteiro, ele imprima, linha-a-linha, a tabuada daquele n�mero at� o 10. Por exemplo, se ele escolher o n�mero 2, o programa imprimir�: 2x1=2, 2x2=4, 2x3=6, ..., 2x10=20
    scanf("%d", &numero);

    for(int i = 0; i <=10; i++){
        int multiplicacao = numero * i;
    printf("%d x %d = %d\n",numero, i, multiplicacao);
    }
}
