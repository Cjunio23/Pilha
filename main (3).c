#include <stdio.h>
#include <stdlib.h>
int tam=10;

void preencher(int *v){
    int i;
    for (i=0;i<tam;i++){
        v[i]=rand()%21;
    }
}

int * criar_vetor(){
    int * v = malloc(tam*sizeof(int)); //heap
    preencher(v);
    return v;
}
void exibir(int *v){
    int i;
    printf("\n");
    for (i=0;i<tam;i++){
        if(v[i]!=0)
            printf(" %d",v[i]);
    }
    printf("\n");
}

int * alterar_tamanho(int *v){
    printf("\nDigite o novo tamanho do vetor: ");
    scanf("%d",&tam);
    v = realloc (v,tam*sizeof(int));
    exibir(v);
    printf("\nDigite novamente: ");
    scanf("%d",&tam);
    v = realloc (v,tam*sizeof(int));
    exibir(v);
    return v;
}
//pilha -> tamanho pequeno
//pilha -> variáveis locais (deixam de existir)
//alteração de tamanho (realocação)
int main(){
    //int numeros[tam]; //pilha
    //int *numeros = malloc(tam*sizeof(int)); //heap
    int * numeros;
    numeros = criar_vetor();
    exibir(numeros);
    numeros = alterar_tamanho(numeros);
    exibir(numeros);
}
