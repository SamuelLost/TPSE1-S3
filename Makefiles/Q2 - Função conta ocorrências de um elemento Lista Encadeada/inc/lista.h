   typedef struct lista Lista;
   /* Cria uma lista vazia.*/
   Lista* lst_cria(); 
   /* Testa se uma lista é vazia.*/
   int lst_vazia(Lista *l); 
   /* Insere um elemento no início da lista.*/
   Lista* lst_insere(Lista *l, int info); 
   /* Busca um elemento em uma lista.*/
   Lista* lst_busca(Lista *l, int info); 
   /* Imprime uma lista.*/
   void lst_imprime(Lista *l); 
   /* Remove um elemento de uma lista.*/
   Lista* lst_remove(Lista *l, int info); 
   /* Libera o espaço alocado por uma lista.*/ 
   void lst_libera(Lista *l);
   /* Função que retorna o somatório de uma lista.*/
   int lst_somatorio(Lista *l);
   /* Função que conta o número de ocorrências de um elemento em uma lista.*/
   int lst_conta(Lista *l, int info);
   /* Função que cria uma cópia de uma lista, sem alterar a lista passada como parâmetro.*/
   Lista* lst_copia(Lista *l);
   /* Função que cria uma cópia invertida de uma lista, sem alterar a lista passada como parâmetro.*/
   Lista* lst_copia_invertida(Lista *l);
   