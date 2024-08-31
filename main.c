#include <stdio.h>

int main() {
    int i;
    long long int fibonacci = 0, fibonacciAnterior1 = 1, fibonacciAnterior2 = 0, numeroInformado;

    printf("Digite um numero: ");
    scanf("%lli", &numeroInformado);


    while (fibonacci < numeroInformado) {
        fibonacciAnterior2 = fibonacciAnterior1;
        fibonacciAnterior1 = fibonacci;
        fibonacci = fibonacciAnterior1 + fibonacciAnterior2;
    }

    if (fibonacci == numeroInformado) {
        printf("Numero informado pertence a sequencia\n");
    } else {
        printf("Numero informado nao pertence a sequencia\n");
    }

    return 0;
}