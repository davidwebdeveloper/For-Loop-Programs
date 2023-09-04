// Write a program to display the sum of the series [ 9 + 99 + 999 + 9999 ...]. 

#include<stdio.h>
int p(int,int);
int main() {
    int n,i,series,sum=0;
    printf("Enter the limit: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        series = p(10,i)-1;
        sum = sum + series;
        printf("%d + ",series);
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