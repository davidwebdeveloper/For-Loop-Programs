// Write a program to input any number and print it in words.

#include<stdio.h>
int main() {
    int n,i,t;
    printf("Enter the number :");
    scanf("%d",&n);
    for(i=n;i!=0;i=i/10) {
        t=i%10;
        if(t==1) 
            printf("One");
        else if(t==2) 
            printf("Two");
        else if(t==3)
            printf("Three");
        else if(t==4)
            printf("Four");
        else if(t==5) 
            printf("Five");
        else if(t==6)
            printf("Six");
        else if(t==7) 
            printf("Seven");
        else if(t==8)
            printf("Eight");
        else if(t==9)
            printf("Nine");
        else 
            printf("Zero");
      

    }
      return 0;
}