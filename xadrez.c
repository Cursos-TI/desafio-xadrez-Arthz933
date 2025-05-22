#include <stdio.h>

int funcaoxadrez() {
    char opcao; 

    printf("novo commit");


    printf("BEM VINDO AO PROGRAMA DE MOVIMENTAÇÃO DE PEÇAS DE XADREZ !\n");
    printf("T- torre\n");
    printf("B- bispo\n");
    printf("R- rainha\n");
    printf("C- cavalo\n");
    printf("S - sair\n");
    printf("escolha uma peça para ser movimementada: ");    
    scanf(" %c", &opcao); // esse espaço no leitor % ignora espaços em branco no scanf

    switch (opcao) {
        case 't': 
        case 'T':
        int t = 1;
        printf("você selecionou a torre: \n");

        do {
            printf("direita\n", t++);

        } while (t <= 5); // faz "direita" enquanto int t for menor ou igual a 5, adicionando 1 a variável, ou seja 5 vezes
        break;
        case 'b':
        case 'B':

        int b = 1;
        printf("você selecionou o bispo: \n");

        while (b <= 5) {
        printf("cima, direita\n", b++); // mostra "cima, direita" enquanto b que é 1 for <= a 5, adicionando 1 a variável, ou seja 5 vezes
        }

        break;
        case 'r':
        case 'R':
        printf("você selecionou a rainha: \n");

        for (int r = 0; r < 8; r++) {
        printf("esquerda\n"); // mostra "esquerda" enquanto r = 0 for menor que 8, e adicionando 1 a variável, ou seja, 8 vezes

        }

        break;

        case 'c':
        case 'C':
        printf("você selecionou o cavalo: \n");
        int movimentodocavalo = 1;
        while(movimentodocavalo--) {
            for(int n = 0; n < 2; n++) {
                printf("baixo\n");
            }
            printf("direita\n");
        }
        break;

        case 's':
        case 'S':
        printf("saindo...");
        break;
        default: // faz com que qualquer coisa digitada diferente de "s, S, r, R, t, T, b ou B", seja mostrado na tela um aviso de opção inválida 
        printf("opção inválida, tente novamente !");
    }

    return 0;
} 

int main() { // função principal que chama a funcaoxadrez para ser executada
    funcaoxadrez();
    return 0;
}
