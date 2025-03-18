#include <stdio.h>

//Aqui criamos as funções recursivas

void movimento(int torre){
    if (torre > 0) {
        movimento(torre - 1);
        printf("Direita \n", torre);

    }
}

void mov(int rainha){
    if (rainha > 0) {
        mov(rainha - 1);
        printf("Esquerda \n", rainha);

    }
}

void movbispo(int bispo){
    if (bispo > 0) {
        movbispo(bispo - 1);
        printf("Cima Direita \n", bispo);

    }
}
void movcavalo(int casas){
    if (casas > 0) {
        movcavalo(casas - 1);
        printf("Direita \n", casas);

    }
}

int main() {
    
    // Aqui declaramos variáveis.
    int i = 5, j = 8;

    // Implementação de Movimentação do Bispo
    printf("»»» BISPO ««« \n");
    for (int i = 1; i <= 5; i++)  { //loop externo
        for (int j = 1; j <= 1; j++) { //loop interno
            movbispo(j);
        }
        
    }
    // Implementação de Movimentação da Torre
    printf("»»» TORRE ««« \n");
        movimento(i);

    // Implementação de Movimentação da Rainha
    printf("»»» RAINHA «««\n");
        mov(j);

    // Implementação de Movimentação do Cavalo
    printf("»»» CAVALO ««« \n");
    for (i = 1, j = 0; i <= 2, j <= 1; i++, j++)
    {
        printf("Cima\n", i);
        movcavalo(j);
    }    

    return 0;
}
