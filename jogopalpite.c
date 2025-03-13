# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(){
    int opcao, regras, numerosecreto, palpite;

    printf("Bem vindo ao jogo de Palpites\n");
    printf("****MENU PRINCIPAL****\n");
    printf("1. Iniciar o jogo\n");
    printf("2. Regras do Jogo\n");
    printf("3. Sair do Jogo\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        srand (time(0));
        numerosecreto = rand() % 10;
        printf("Digite um número de 0 a 9: ");
        scanf("%d", &palpite);
        if (numerosecreto == palpite){
            printf("Você venceu!\n");
            printf("Numero Secreto %d\n", numerosecreto);
        } else {
            printf("Você Errou!\n");
            printf("Numero Secreto %d\n", numerosecreto);
        }
        break;
    case 2:
        printf("****REGRAS DO JOGO****\n");
        printf("1. Regra 1\n");
        printf("2. Regra 2\n");
        scanf("%d", &regras);
        switch (regras)
        {
        case 1:
            printf("Regra 1 ...\n");
            break;
        case 2:
            printf("Regra 2 ...\n");
            break;
        default:
            printf("Opção Inválida\n");
            break;
        }
        break;
    case 3:
        printf("Saindo do Jogo, Obrigado!\n"); 
        break;          
    default:
        printf("Opção Inválida\n");
        break;
    }
    return 0;
}
