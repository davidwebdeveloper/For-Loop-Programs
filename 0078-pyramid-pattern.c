// Write a program to display the pattern using digits with right justified and the
// highest columns appears in first row

// 1 2 3 4 5 
//  1 2 3 4 
//   1 2 3 
//    1 2 
//     1 

#include<stdio.h>
int main() {
    int i,j,n,count,k,v;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        count=1;
        for(j=1;i-j>0;j++) {
            printf(" ");
        }
        
        for(k=j;k<=n;k++) {
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }


}