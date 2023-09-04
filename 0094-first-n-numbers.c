// Write a program that will print the first N numbers for a specific base.

#include<stdio.h>
int p(int,int);
int main() {
    int n,b,e,i,temp,total=0,j,k;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Enter the base : ");
    scanf("%d",&b);
    for(j=1;j<=n;j++) {
        k=0;
        total = 0;
        for(i=j;i!=0;i=i/b) {
            temp = i % b;
            total = total + temp * p(10,k);  
            k++;
        }
        printf("%d ",total);
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
