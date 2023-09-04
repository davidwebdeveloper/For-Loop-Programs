// Write a program to display the pattern power of 2, triangle.
//     1     
//    1 2 1    
//   1 2 4 2 1   
//  1 2 4 8 4 2 1  
// 1 2 4 8 16 8 4 2 1

#include<stdio.h>
int p(int, int);
int main() {
    int i,j,k,n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        k=-1;
        for(j=1;j<=2*n-1;j++) {
            if(j>=n-i && j<=n+i) {
                if(j<=n) {
                    k++;
                    printf("%d ",p(2,k));
                }
                else {
                    k--;
                    printf("%d ",p(2,k));
                }
            }
            else {
                printf(" ");
            }
            
        }
        printf("\n");
    }
}

int p(int x, int e) {
    int i,result=1;
    for(i=0;i<e;i++) {
        result = result * x;
        // printf("\nresult = %d",result);
    }
    return result;
}