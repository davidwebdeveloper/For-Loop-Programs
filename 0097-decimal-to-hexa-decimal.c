// Write a program to convert a decimal number to hexadecimal number.


#include<stdio.h>
int p(int,int);
int main() {
    int i,n,temp,k=0;
    char a[100];
    printf("Enter the decimal number: ");
    scanf("%d",&n);
    for(i=n;i!=0;i=i/16) {
        temp = i%16;
        if(temp<10) {
            a[k]=48+temp;
        }
        else {
            a[k]=55+temp;
        }
        k++;
    }
    for(i=k;i>=0;i--) {
         printf("%c",a[i]);
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
