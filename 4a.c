#include <stdio.h>

int main()
{
    int r2, c2, r1, c1;
    printf("Enter row and column of matrix - 1: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter row and column of matrix - 2: ");
    scanf("%d %d", &r2, &c2);
    printf("\n");
    if ((r1 != r2) && (c1 != c2))
        printf("\nMatrix addition is not possible\n");
    else
    {
        int m1[r1][c1], m2[r1][c2];
        for (int i = 0; i < r1; i++)
        {
            printf("Enter row - %d elements of matrix 1: ", i + 1);
            for (int j = 0; j < c1; j++)
                scanf("%d", &m1[i][j]);
        }
        printf("\n");
        for (int i = 0; i < r1; i++)
        {
            printf("Enter row - %d elements of matrix 2: ", i + 1);
            for (int j = 0; j < c1; j++){
                scanf("%d", &m2[i][j]);
                m1[i][j]+=m2[i][j];
            }
        }
        system("cls");
        printf("\nAfter adding the two matrices:\n\n");
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){ 
                printf("%2d ",m1[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}