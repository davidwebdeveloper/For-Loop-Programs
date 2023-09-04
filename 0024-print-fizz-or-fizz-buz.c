// Print the numbers from 1 to 100, but for multiples of 3, print "Fizz," for multiples of 5, print "Buzz,"
// and for multiples of both 3 and 5, print "FizzBuzz."

#include<stdio.h>
int main() {
    int i;
    for(i=1;i<=100;i++)
    {
        if(i%3==0 && i%5==0)
            printf("Fizzbuzz ");
        else if(i%3==0)
            printf("Fizz ");
        else if(i%5==0)
            printf("Buzz ");
        else 
            printf("%d ",i);
    }
}