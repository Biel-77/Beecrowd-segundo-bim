#include <stdio.h>
#define TF 5
int main()
{
    int valor,par[TF],impar[TF],i,j,contPar=0,cotImpar=0;

    for(i=0; i<15; i++)
    {
        scanf("%d"&valor);

        if(valor %2 == 0)
        {
            par[contPar] = valor;
            contPar++;

            if(contPar == 5)
            {
                for(j = 0, j<5; j++)
                {
                    printf("par")
                }
            }
        }
    }






    return 0;
}

