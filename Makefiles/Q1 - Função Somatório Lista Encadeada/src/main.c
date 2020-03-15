#include "lista.h"
#ifndef LISTA_H
#define LISTA_H
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
    printf("%d\n",lst_somatorio(lAux)); //Somatório
    printf("%s - Linha: %d - Data: %s -  Time: %s", __FILE__, __LINE__, __DATE__, __TIME__);
    lst_libera(lAux);
    return 0;
}
#endif //Lista.h
