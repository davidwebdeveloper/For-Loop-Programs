// . Print the first 10 numbers of the Catalan sequence using a for loop.

#include<stdio.h>
int main() {
    int i,j;
    int a[11][11];
    for(i=0;i<11;i++) {
        for(j=0;j<=i;j++) {
            if(j==0 || j==i) 
                a[i][j] = 1;
            else
                a[i][j]=a[i-1][j-1] +a[i-1][j];
            
            
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}