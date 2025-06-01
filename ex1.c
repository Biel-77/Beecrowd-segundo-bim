#include <stdio.h>
int main() 
{
    int a, b, resultado;
    int n, i;

    printf("Digite a quantidade de casos:\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {
        printf("Digite dois numeros:\n");
        scanf("%d %d", &a, &b);

        resultado = a ^ b;
        printf("%d\n", resultado);
    }

    return 0;
}
