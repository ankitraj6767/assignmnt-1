//conversion of 2d array into 1d array
#include <stdio.h>

int main()
{
   int row,column;
   printf("Enter row and column of matrix: ");
   scanf("%d%d",&row,&column);
   int a[row][column];
   printf("The matrix are:\n ");
   for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
     scanf("%d",&a[i][j]);
    }
   }
  printf("Original 2d array are:\n ");
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
     printf("%d ",a[i][j]);
    }
    printf("\n");
   }
   int n=row*column;
   int b[n];
   int k=0;
   for(int i=0;i<row;i++){
    for(int j=0;j<n;j++){
     b[k]=a[i][j];
     k++;
    }
   }
   printf("\n fianl 1d array are: \n");
   for(int i=0;i<n;i++){
    printf("%d ",b[i]);
   }
    return 0;
}
