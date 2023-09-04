// Calculate the sum of all elements in a 2D array.

#include<stdio.h>
int main() {
    int i,j,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n];

    // First Array
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\nEnter the a%d%d element : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    // 2nd Array
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\nEnter the b%d%d element : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    // sum
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j] = a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }


}