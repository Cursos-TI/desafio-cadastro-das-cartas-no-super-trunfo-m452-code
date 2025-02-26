#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
       char codigo[20]  = "B01";
    char nome[20] = " Rio de Janeiro";
    int populacao = "6748000";
    float area =  1200.25 ;
    float PIB = 300.50 ;
    int Pontos  = 30;  

    printf("coidgo: %s\n", codigo );
    printf(" nome: %s\n",nome); 
    printf("populacao: %d populacao\n", populacao );
    printf("area: %.2f km²\n", area );
    printf("PIB: %.2f reais\n", PIB );
    printf("Pontos Turísticos: %d\n",Pontos );

    char codigo[20]  = "A01";
    char nome[20] = "São Paulo";
    int populacao = "12325000";
    float area = 1521.11;
    float PIB = 699.28;
    int Pontos  = 50;  

    printf("coidgo: %s\n", codigo );
    printf(" nome: %s\n",nome); 
    printf("populacao: %d populacao\n", populacao );
    printf("area: %.2f km²\n", area );
    printf("PIB: %.2f reais\n", PIB );
    printf("Pontos Turísticos: %d\n",Pontos );


 
    return 0;
}
