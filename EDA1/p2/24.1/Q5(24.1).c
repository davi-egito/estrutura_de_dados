#include <stdio.h>

int Q5(char vetor[], int tamanho){
    int trocas = 0, j , i;
    char chave;
    for (i = 1; i < tamanho; i++)
    {
        chave = vetor[i];
        j = i-1;
        printf("%d, %d, %c\n", i, j, chave);
        while (j >= 0 && vetor[j] > chave)
        {
            printf("%s\n", vetor);
            vetor[j+1] = vetor[j];
            printf("%s\n", vetor);
            j--; trocas++;
        }
        vetor[j+1]= chave;
        printf("%s\n\n", vetor);
    }
    return trocas;
}

// Qual o valor de R? 4
// Qual o valor de nome? cehloo
// Qual tipo de ordenacao da funcao q5? Insertion Sort 

int main(){
    char nc[] = "coelho";
    int res = Q5(nc, 6); // last nome, qtd de letras last nome;
    printf("resposta = %d\n\n", res);
    return 0;
}