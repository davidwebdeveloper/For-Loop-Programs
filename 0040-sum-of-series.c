// Write a program to find the sum of series 1 - X^2/2! + X^4/4!-.... upto nth
// // term. 
#include<stdio.h>
int fact(int);
int p(int,int);
int main() {
    int count=0,i,j,n,x;
    float term;
    float sum =0;
    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("Enter the X value: ");
    scanf("%d",&x);
    for(i=0;count<n;i=i+2) {
        if(i==0)
        {
            term = 1;
            count++;
        }
           
        else{
            term = (float)p(x,i)/(float)fact(i);
            count++;
        }
        if(count%2==0) 
        {
             term= term*-1;
        }
        sum = sum + term;
        
        printf("\n%d term value = %f",count,term);
    }
    
    printf("Sum is = %.2f",sum);
    return 0;

}
int fact(int n) {
    int i,fact=1;
    for(i=n;i>0;i--) {
        fact = fact * i;
       
        
    }
    //  printf("\nfactorial = %d",fact);
     return fact;
}

int p(int x, int e) {
    int i,result=1;
    for(i=0;i<e;i++) {
        result = result * x;
        
    }
    // printf("\nresult = %d",result);
    return result;
}
