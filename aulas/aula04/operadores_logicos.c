#include <stdio.h>

int main() {
    int idade;

    printf("entre com a sua idade: ");
    scanf("%i", &idade);
    while(getchar() != '\n');

    printf("voce eh uma crianca? %i", idade >= 0 && idade <= 12);
    // && => 0 falso e qualquer coisa = sempre falso

    // || => verdadeiro OU qualaquer coisa + sempre verdadeiro
    printf(" voce tem prioridade para vacinar? %i\n", idade <= 6 || idade >= 60);
    // ! => NAO verdadeiro = falso, NAO falso = verdadeiro 
    printf("voce naum pode votar? %i\n", !(idade >= 16));

    printf("voce eh um adolescente? %i", idade > 12 && idade < 16);
    printf("voce eh um jovem? %i", idade >=16 && idade <= 20);


    return 0;
}