#include<stdio.h>
int isPrime(int);
int main() {
    int i,p,n;
    printf("Input positive integer: ");
    scanf("%d",&n);
    for(i=1;i<n/2;i++) {
        p = n-i;
        if(isPrime(p) && isPrime(i)) {
            printf("\n%d = %d + %d",n,p,i);
        }


    }

}


int isPrime(int n) {
    int i,count=0;
    for(i=1;i<=n/2;i++) {
        if(n%i==0)
            count++;
    }
    if(count<=1)
        return 1;
}