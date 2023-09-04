// Create a program using a for loop to display the multiplication table of a given integer

#include<stdio.h>
int main() {
    int i,j,result;
    printf("Enter which table: ");
    scanf("%d",&j);
    for(i=1;i<=20;i++) {
        printf("%d X %d =  %d",i,j,i*j);
        printf("\n");
       
    }
}