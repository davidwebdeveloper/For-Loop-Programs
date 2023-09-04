// Write code to create a checkerboard pattern with the words "black" and
// "white".

// black-white-black-white-black
// white-black-white-black-white
// black-white-black-white-black
// white-black-white-black-white
// black-white-black-white-black

#include<stdio.h>
int main() {
    int i,j,n,sum;
    printf("enter the number of rows: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            sum =i + j;
            if(sum%2==0)
                printf("black");
            else
                printf("white");
            if(j<n-1) 
                printf("-");
        }
        printf("\n");
    }
}