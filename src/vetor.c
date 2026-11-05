#include <stdio.h>

int main()
{
    int i;
    int num[5];
    int pares = 0, impares = 0;

    for (i = 0; i < 5; i++)
    {
        do
        {
            printf("Digite um numero inteiro positivo: ");
            if (scanf("%d", &num[i]) != 1)
            {
                printf("Entrada invalida.\n");
                return 1;
            }
            if (num[i] <= 0)
            {
                printf("Digite um numero maior que zero.\n");
            }
        } while (num[i] <= 0);
    }

    printf("\n*** Numeros digitados ***\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", num[i]);
        if (num[i] % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
    }
    printf("\nQuantidade de pares: %d\n", pares);
    printf("Quantidade de impares: %d\n", impares);
    return 0;
}
