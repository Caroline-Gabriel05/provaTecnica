#include <stdio.h>
#include <string.h>


void inverter(char vet[]) {
    int tamanho = strlen(vet);
    int i, auxiliar, final = tamanho - 1;

    for (i = 0; i < tamanho / 2; i++) {
        auxiliar = vet[i];
        vet[i] = vet[final];
        vet[final] = auxiliar;
        final--;
    };

}
    int main() {
        char texto[50];
        printf("Digite algo: ");
        scanf("%s", texto);

        printf("%s \n", texto);
        inverter(texto);
        printf("%s \n", texto);
        return 0;
    }
