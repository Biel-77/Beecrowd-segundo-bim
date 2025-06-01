#include<stdio.h>
#define TF 20

int main()
{
    double vet[TF],
    int i, aux;

    for(i=0; i<TF; i++)
    {
        scanf("%d", &vet[i]);
    }

    //trocas
    for(i=0; i<TF; i++)
    {
        aux = vet[i];
        vet[i] = vet[19 - 1];
        vet[19 - 1] = aux;
    }

    //impressao
    for(i=0; i<TF; i++)
    {
        printf("N[%d] = %d\n",i, vet[i]);
    }

    return 0;
}