// Write a program to display the pattern like a diamond

#include<stdio.h>
int main() {
    int i,j,n,k,l,m;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        for(j=1;j<=2*n-1;j++) {
            if(j>=n-i && j<=n+i)
                printf("*");
            else 
                printf(" ");
        }
        printf("\n");
        
    }
    for(l=i-2;l>=0;l--) {
        for(m=1;m<=2*n-1;m++) {
            if(m>=n-l && m<=n+l) 
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}