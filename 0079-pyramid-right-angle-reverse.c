// rite a program to display the pattern using digits with left justified and the
// highest columns appears in first row in descending order.

// 54321
// 4321
// 321
// 21
// 1

#include<stdio.h>
int main() {
    int n,i,j;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=n;i>0;i--) {
        for(j=i;j>0;j--) {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}