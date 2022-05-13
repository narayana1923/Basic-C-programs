#include <stdio.h>
int r1,c1,r2,c2;
void intialize(int m1[][c1],int m2[][c2]){
        printf("\n");
        for (int i = 0; i < r1; i++)
        {
            printf("Enter elements of row %d of matrix -1: ", i + 1);
            for (int j = 0; j < c1; j++)
                scanf("%d", &m1[i][j]);
        }
        printf("\n");
        for (int i = 0; i < r2; i++)
        {
            printf("Enter elements of row %d of matrix -2: ", i + 1);
            for (int j = 0; j < c2; j++)
                scanf("%d", &m2[i][j]);
        }
}
void multiply(int m1[][c1],int m2[][c2],int mul[][c2]){
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            mul[i][j]=0;
            for(int k=0;k<c2;k++){
                mul[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
}
void print(int mul[][c2]){
    printf("after multiplying matrix is:\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++) printf("%3d ",mul[i][j]);
        printf("\n");
    }
}
int main()
{
    printf("Enter rows and columns of matrix-1: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of matrix-2: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2)
        printf("\nMatrix multiplication is not possible\n");
    else
    {
        int m1[r1][c1], m2[r2][c2];
        intialize(m1,m2);
        system("cls");
        int mul[r1][c2];
        multiply(m1,m2,mul);
        print(mul);
    }
}