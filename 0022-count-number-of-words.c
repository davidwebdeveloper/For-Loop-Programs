//  Count the number of words in a sentence.

#include<stdio.h>
#include<string.h>
int main() {
    int word=1,i;
    char str[] = "I am a indian";
    printf("Enter the number: ");
    for(i=0;i<strlen(str);i++) {
        if(str[i]==32)
            word++;
        
    }
    printf("%d",word);
}