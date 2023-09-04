// Write a program to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....].

#include<stdio.h>
int fact(int);
int p(int, int);
int main() {
    int x,n,i;
    float sum=0;
    printf("number of terms: ");
    scanf("%d",&n);
    printf("input the value of x: ");
    scanf("%d",&x);
    for(i=0;i<n;i++) {
        if(i=0) {
            sum = 1;
        }
        else {
            sum = sum + (float)p(x,i)/fact(i);
        }
    }
    printf("Sum is = %.2f",sum);
    return 0;

}

// Power of function

int p(int x, int e) {
    int i,result=1;
    for(i=0;i<e;i++) {
        result = result * x;
        // printf("\nresult = %d",result);
    }
    return result;
}

int fact(int n) {
    int i,fact=1;
    for(i=n;i>0;i--) {
        fact = fact * i;
        // printf("\nfactorial = %d",fact);
        return fact;
    }
}