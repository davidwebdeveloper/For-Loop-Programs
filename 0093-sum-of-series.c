// Write a program to calculate the sum of the series
// 1.2+2.3+3.4+4.5+5.6+.......

#include<stdio.h>
int main() {
    int n,i,var=1;
    float term;
    printf("Enter the limit of the series: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        term = i;
        var = var+1;
        printf("%.f.%d",term,var);
        if(i<n) {
            printf("+");
        }
    }
}