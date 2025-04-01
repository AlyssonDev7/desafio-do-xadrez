#include <stdio.h>

int main(){
// Mover a Torre 5 casas a direita
printf("Abaixo estara o movimento da Torre:\n");
for(int i = 0; i < 5; 
i++) // Imcrementa o contador a cada repetição
{
    printf("Direita\n"); // Imprimindo a direção da Torre
}

 printf("\nAbaixo estara o movimento da Rainha:\n");   
// Mover a Rainha 8 casas para a esquerda
int i = 0;

while (i < 8){
    printf("Esquerda\n", i); 
    i++; // Imcrementa o contador a cada repetição
}

printf("\nAbaixo estara o movimento do Bispo:\n");
int l = 0; // Inicializa o contador

    do {
        printf("Cima\n");
        printf("Direita\n");
        l++; // Incrementa o contador a cada repetição
    } while (l < 5); // Repete até atingir 5 vezes









return 0;

}


    
    
        

