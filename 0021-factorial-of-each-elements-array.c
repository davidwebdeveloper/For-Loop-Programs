// . Calculate the factorial of each element in an array and store them in a new array.
#include<stdio.h>
#include<string.h>
int main() {
    int a[]={4,3,5,6};
    int b[100];
    int i,fact=1,j,k;
    for(i=0;i<strlen(a);i++) {
        for(j=1;j<=a[i];j++) {
            fact = fact * j;
        }
        b[i]=fact;
        fact =1;
    }
    for(k=0;k<strlen(a);k++) {
        printf("%d is %d",a[k],b[k]);
    }

}