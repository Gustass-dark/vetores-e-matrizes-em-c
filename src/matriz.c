#include <stdio.h>

int main()
{
    int i, j;
    int num[3][2];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Digite um numero: ");
            if (scanf("%d", &num[i][j]) != 1)
            {
                printf("Digite apenas numeros inteiros.\n");
                return 1;
            }
        }
    }

    // Imprimindo a matriz original
    printf("\n*** Matriz original (3x2) ***\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", num[i][j]);
        }
        printf("\n");
    }

    // Imprimindo a matriz transposta
    printf("\n*** Matriz transposta (2x3) ***\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", num[j][i]);
        }
        printf("\n");
    }
    return 0;
}
