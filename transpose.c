//Program to find transpose of matrix
#include <stdio.h>
int main()
 {
    //to declare variables
  int a[10][10], transpose[10][10],rows,col;
  printf("Enter rows and columns: ");
  scanf("%d %d",&rows,&col);

  // asssigning elements to the matrix
  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < rows; ++i)
  for (int j = 0; j < col; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }

  // printing the matrix a[][]
  printf("\nEntered matrix: \n");
  for (int i = 0; i < rows; ++i)
  for (int j = 0; j < col; ++j) {
    printf("%d  ", a[i][j]);
    if (j == col - 1)
    printf("\n");
  }

  // to calculate transpose
  for (int i = 0; i < rows; ++i)
  for (int j = 0; j < col; ++j) {
    transpose[j][i] = a[i][j];
  }

  // displaying the transpose
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < col; ++i)
  for (int j = 0; j < rows; ++j) {
    printf("%d  ", transpose[i][j]);
    if (j == rows - 1)
    printf("\n");
  }
  return 0;
}