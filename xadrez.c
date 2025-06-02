#include <stdio.h>

// Definição da função fora de qualquer outra
void funcaotorre() {
    for(int t = 1; t <= 5; t++){
    printf("direita\n");

    return; // return sem valor pois funções tipo void não retornam valores (opcional em c)
    
    // return 0 é usado em funções int que retornam valores, significa que o código foi bem sucedido

}
}

void funcaobispo() {
    int d, e;

    for(d = 1; d <= 5; d++) { // a condição determina quantos blocos de "cima direita" serão mostrados
        printf("cima\n");
        for(e = 0; e < 1; e++) { /*faz com que seja adicionado apenas um "esquerda", 0 + 1 = 1 e a variável
            precisa ser < 1, fim do código*/ 
            printf("direita\n");
        }

        return;

    }
} 

void funcaorainha() {
    int r = 0;
    do {
        printf("esquerda\n");
        r++; // adiciona +1 ao r

    } while(r <= 8); // faz a função do rodar 8 vezes 

    return;
}

void funcaocavalo() {
    int c, d;
    for(c = 2; c <= 2; c++) { // faz com que apenas um bloco seja mostrado 
        printf("cima\n"); // mostra cima cima 
        printf("cima\n");
        for(d = 1; d <= 1; d++) {
        printf("direita\n"); // mostra direita
        }
    }
    return;
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
            funcaocavalo(); // chamada da função cavalo
            
            break;
        }

        case 's':
        case 'S': {
            printf("Saindo...\n"); // faz um saindo...
            break;
        }

        default:
            printf("Opção inválida, tente novamente!\n"); /*mostra printf para qualquer opção que não esteja
            dentro de um case*/ 
    }

    return 0;
}

int main() {
    funcaoxadrez();
    return 0;
}
