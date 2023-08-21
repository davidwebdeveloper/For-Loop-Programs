//  Print the numbers from 1 to 10.
#include<stdio.h>
int main() {
    int limit,i;
    printf("Enter the limit : ");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
        printf("%d ",i);
    return 0;
}