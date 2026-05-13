#include <stdio.h>

int main(){
    int opcao = 0;


    do{
    printf("MENU PRINCIPAL\n");
    printf("1 - consultar saldo\n");
    printf("2 - recarregar\n");
    printf("3 - ver mensagens\n");
    printf("4 - ver ligacoes\n");
    printf("5 - sair\n");
    printf("escolha uma opcaoo > ");
    scanf("%i", &opcao);
    while (getchar() != '\n');

    switch (opcao)
    {
    case 1: printf("seu saldo eh R$ 10,00\n"); break;
    case 2: printf("escolha entre 10, 20 e 50\n"); break;
    case 3: printf(" voce nao tem mensagens\n"); break;
    case 4: printf(" ultimas ligacoes: 9999-9999\n"); break;
    case 5: printf("obrigado pelo contato! ate logo\n"); break;
    default: printf("opcao invalida! tente de novo.\n"); 
    }

} while (opcao != 5);
 


    
    


    return 0;
}