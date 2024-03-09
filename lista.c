#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /*Faça o cálculo a seguir, considerando a matriz A 2x4. Os valores devem ser
    perguntados ao usuário: 2 . Matriz A.*/
    /*
    int matrixA[2][4] = {0};
    int linha[2][4];
    int coluna[2][4];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite os valores: ");
            scanf("%i", &matrixA[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%i  ", matrixA[i][j]);
        }
        printf("\n");
    }
    */
    /*Faça o cálculo a seguir, considerando as matrizes A e B 3x3. Os valores devem ser
    perguntados ao usuário:
    (3 . Matriz A) – Matriz B.*/
    /*
    int matrixA[3][3];
    int matrixB[3][3];
    int matrixC[3][3]={0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite os valores Da matrixA: ");
                scanf("%i   ", &matrixA[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite os valores da matrixB: ");
                scanf("%i   ", &matrixB[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrixC[i][j] = matrixC[i][j]  + ((matrixA[i][j] * 3)- matrixB[i][j]);
        }
    }
            printf("Matrix C");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%i  ",matrixC[i][j]);
        }
        printf("\n");
    }
    */
    /*Exiba a matriz original e a matriz transposta de uma matriz 5x2. Os valores devem
    ser perguntados ao usuário.*/
    /*
    int matrixA[5][2];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Digite os valores Da matrixA: ");
            scanf("%i", &matrixA[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%i  ",matrixA[i][j]);
        }
        printf("\n");
    }
    */
    /*Faça o produto entre duas matrizes, sendo a primeira uma matriz 4x2 e a segunda
    matriz 2x4. Os valores devem ser perguntados ao usuário. Exiba as 3 matrizes.*/
    /*
    int A[4][2];
    int B[2][4];
    int C[4][4]={0};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Digite o valor da matrixA");
            scanf("%i", &A[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite o valor da matrixB");
            scanf("%i", &B[i][j]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            C[i][j] = C[i][j] + (A[i][j] * B[i][j]);
        }
        printf("\n");
    }
    printf("Matrix C \n");
     for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%i      ",C[i][j] );
        }
     printf("\n\n");
    }
    printf("Matrix A \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%i ",A[i][j] );
        }
    printf("\n");
    }
    printf("Matrix B \n");
      for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%i ",B[i][j] );
        }
    printf("\n");
    }
    */
    /*Exiba todos os valores do triângulo superior de uma matriz 3x3 (acima da diagonal
    principal. Exiba no formato de matriz e se a posição não estiver no triângulo
    superior exiba “*” no lugar do número.
    */
    /*
      int A[4][2];
     for (int i = 0; i < 3; i++)
     {
         for (int j = 0; j < 3; j++)
         {
             printf("Digite o valor da matrixA");
             scanf("%i", &A[i][j]);
         }
     }
     for (int i = 0; i < 3; i++)
     {
         for (int j = 0; j < 3; j++)
         {
             if (i == j)
             {
                 printf("%i  ", A[i][j]);
             }
             else{
                 printf("*   ");
             }

         }
         printf("\n");
     }
    */
    /*Some todos os valores do triângulo inferior da diagonal principal, incluindo a
    diagonal principal de uma matriz 4x4.*/
    /*
     int A[4][2];
     int soma = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite o valor da matrixA");
            scanf("%i", &A[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i < j)
            {
                soma = soma + A[i][j];

            }
        }
    }
      printf("soma = %i\n",soma);
    */
    /*Informe o maior valor acima da diagonal secundária de uma matriz 3x3.*/
    /*
    int A[3][3];
    int n = 3;
    int maior = 0;
   for (int i = 0; i < 3; i++)
   {
       for (int j = 0; j < 3; j++)
       {
           printf("Digite o valor da matrixA");
           scanf("%i", &A[i][j]);
       }
   }
  printf("\n");
 for (int i = 0; i < 3; i++) {
   for (int j = 0; j < 3; j++) {
     if (j > i) {
       printf("%d ",A[i][j]);
       if (A[i][j] > maior)
       {
           maior = A[i][j];
       }

     } else {
       printf("* ");
     }
   }
   printf("\n");
 }
   printf("%i", maior);
    */
    /*Informe a média de valores abaixo da diagonal secundária de uma matriz 4x4.*/

    int A[3][3];
    int n = 3;
    int maior = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite o valor da matrixA");
            scanf("%i", &A[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j < i)
            {
                printf("%d ", A[i][j]);
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}
