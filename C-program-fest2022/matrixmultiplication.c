#include<stdio.h>
void main()
{
    int a,b,m,n;
    printf("Enter the number of rows in first matrix A :\n");
    scanf("%d",&a);
    printf("Enter the number of columns in first matrix A :\n");
    scanf("%d",&b);
    printf("Enter the number of rows in second matrix B :\n");
    scanf("%d",&m);
    printf("Enter the number of columns in second matrix B :\n");
    scanf("%d",&n);
    int A[a][b];
    int B[m][n];
    int C[a][n];
    printf("Enter the elements of first matrix A :\n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the elements of second matrix B :\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    printf("First matrix A :\n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    printf("Second matrix B :\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",B[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<n;j++)
        {
            C[i][j]=0;
            for(int k=0;k<b;k++)
            {
                C[i][j]=C[i][j]+A[i][k]*B[k][j];
            }
        }
    }
    printf("Resultant matrix C :\n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
}