#include <stdio.h>
#define TF 100

int main()
{   
    float vet[TF];
    int i;

    for(i=0;i<TF;i++)
    {
        scanf("%f",&vet[i]);
    }

    for(i=0;i<TF;i++)
    {
        if(vet[i]<=10)
        {
            printf("A[%d] = %lf\n",i, vet[i]);
        }
    }
    
    return 0;
}