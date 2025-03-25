#include <stdio.h>

    //Função recursiva para mover a Torre
    void moverTorre(int casas){
        if (casas > 0){
            printf ("Direita \n");
            moverTorre (casas - 1);
         }
        
    }

    //Função recursiva para mover o Bispo
    void moverBispo (int casas){
        if (casas > 0){
            printf ("Cima, Direta \n");
            moverBispo (casas - 1);
        
        }
        
    }

    //Função recursiva para mover a Rainha
    void moverRainha (int casas){
    if (casas > 0){
        printf ("Esquerda \n");
        moverRainha (casas - 1);
    
    }
    
}







int main (){



//Torre: Deverá simular o movimento da Torre 5 casas para a direita.
printf("Movimento da Torre:\n");

for (int i = 0; i < 5; i++){
    printf ("Torre: Direita! \n");
}

printf ("\n");

//Bispo: Movimento do Bispo, 5 casas na diagonal para cima e à direita.
printf("Movimento do Bispo:\n");

int movimentoBispo = 0;
while (movimentoBispo < 5){
    printf ("Bispo: Cima, Direita! \n");
    movimentoBispo++;
}

printf ("\n");

//Rainha:  movimento da Rainha 8 casas para a esquerda.
printf("Movimento da Rainha:\n");
    int movimentoRainha = 0;
    do {
        printf("Rainha: Esquerda! \n");
        movimentoRainha++;
    } while (movimentoRainha < 8);
 

printf ("\n");

//Cavalo: Movimento baixo, baixo, esquerda

printf ("Movimento do Cavalo: \n");
    int movimentoCompleto = 1;
    while (movimentoCompleto--)
    {
        for (int i = 0; i < 2; i++)

        {
            printf ("Baixo \n"); //Imprime cima 2x
        }
            printf ("Esquerda \n"); //Imprime Direita 1x

    }
    
    printf ("\n");

//Cavalo: Movimento direita, direita, cima

printf ("Movimento do Cavalo: \n");
//Loop externo para controlar a repetição dos movimentos "Direita"
    for (int i = 0; i < 1; i++) {
    // Loop interno para imprimir "Direita" duas vezes
    for (int j = 0; j < 2; j++) {
        printf("Direita \n");
    }
}
    // Movimento "Cima"
    printf("Cima \n");

    printf ("\n");

    printf("Movimento da Torre (Recursivo):\n");
    moverTorre(5); 

    printf ("\n");

    printf ("Moviemnto do Bispo (Recursivo): \n");
    moverBispo (5);

    printf ("\n");

    printf ("Moviemnto da Rainha (Recursivo): \n");
    moverRainha (5);

return 0;

}