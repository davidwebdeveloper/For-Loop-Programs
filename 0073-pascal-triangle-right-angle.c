// Write a program to display Pascal's triangle like right angle traingle.

// 1 
// 1 1 
// 1 2 1 
// 1 3 3 1 
// 1 4 6 4 1 
// 1 5 10 10 5 1 
// 1 6 15 20 15 6 1 
// 1 7 21 35 35 21 7 1 
// 1 8 28 56 70 56 28 8 1 
// 1 9 36 84 126 126 84 36 9 1 
// 1 10 45 120 210 252 210 120 45 10 1 

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