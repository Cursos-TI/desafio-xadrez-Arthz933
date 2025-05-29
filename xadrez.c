#include <stdio.h>

// Definição da função fora de qualquer outra
void funcaotorre() {
    for(int t = 1; t <= 5; t++){
    printf("direita\n");
}
}

void funcaobispo() {
    int b = 1;
    while(b <= 5) {
        printf("cima, direita\n");
        b++;
    }
} 

void funcaorainha() {
    int r = 0;
    do {
        printf("esquerda\n");
        r++;

    } while(r <= 8);
}

void funcaocavalo() {
    
}
int funcaoxadrez() {
    char opcao;

    printf("BEM VINDO AO PROGRAMA DE MOVIMENTAÇÃO DE PEÇAS DE XADREZ!\n");
    printf("T - torre\n");
    printf("B - bispo\n");
    printf("R - rainha\n");
    printf("C - cavalo\n");
    printf("S - sair\n");
    printf("Escolha uma peça para ser movimentada: ");
    scanf(" %c", &opcao); // o espaço ignora espaços em branco

    switch (opcao) {
        case 't':
        case 'T': {
            printf("Você selecionou a torre:\n");
            funcaotorre(); // chamada da função torre
            break;
        }

        case 'b':
        case 'B': {
            printf("Você selecionou o bispo:\n");
            funcaobispo(); // chamada da função bispo
            break;
        }

        case 'r':
        case 'R': {
            printf("Você selecionou a rainha:\n");
            funcaorainha(); // chamada da função rainha
            break;
        }

        case 'c':
        case 'C': {
            printf("Você selecionou o cavalo:\n");
            
            break;
        }

        case 's':
        case 'S': {
            printf("Saindo...\n");
            break;
        }

        default:
            printf("Opção inválida, tente novamente!\n");
    }

    return 0;
}

int main() {
    funcaoxadrez();
    return 0;
}
