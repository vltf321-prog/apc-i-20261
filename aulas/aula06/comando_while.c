#include <stdio.h>

int main() {
    int numero = 0;

    printf("entre com um numero entre 1 e 10: ");
    scanf("%i", &numero);
    // remove o char do buffer ate \n 
    while(getchar() != '\n');

    while(numero < 1 || numero > 10) {
        printf(" numero invalido! tente de novo.\n");
        scanf("%i", &numero);
        while (getchar() != '\n');

    }




    return 0;
}