// Write a program to find the sum of the series 1 +11 + 111 + 1111 + .. n
// // terms.

#include<stdio.h>
int p(int,int);
int main() {
    int i,t,sum=0,total=0;
    printf("No of terms: ");
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        sum = sum + p(10,i);
        printf("%d + ",sum);
        total = total + sum;
    }
    printf("\nSum = %d",total);
}

int p(int x, int e) {
    int i,result=1;
    for(i=0;i<e;i++) {
        result = result * x;
        // printf("\nresult = %d",result);
    }
    return result;
}