#include<stdio.h>
#include<stdlib.h>
#include "lista.h"

/*PREZADO(A) ALUNO(A) NÃO EDITAR ESSE ARQUIVO.*/
int main (){
    int n, k;
    int i;
    Lista* lAux = lst_cria();
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&k);
        lAux = lst_insere(lAux, k);
    }
    printf("%d",lst_conta(lAux, 10));
    lst_libera(lAux);
}