// Write a program to find LCM of any two numbers using HCF.

#include<stdio.h>
int main() {
    int a,b,min,hcf,lcm,i;
    printf("Enter the a and b value: ");
    scanf("%d%d",&a,&b);
    if(a>b) 
        min = b;
    else
        min = a;
    
    for(i=min;i>0;i--) {
        if(a%i==0 && b%i==0) {
            hcf = i;
            break;
        }
    }
    lcm = a*b / hcf;
    printf("lcm = %d",lcm); 
}