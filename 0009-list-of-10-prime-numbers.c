// Generate a list of the first 10 prime numbers.

#include<stdio.h>
int isPrime(int);
int main() {
    int i,count=0;
    for(i=2;i>0;i++) {
        if(isPrime(i))
            count++;
        if(count==10)
            break;
    }
}
int isPrime(int n) {
    int i,c=0;
     for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c = c + 1;
        }
    }
    if(c<3) {
        printf("%d ",n);
        return 1;
    }
    else {
        return 0;
    }

}