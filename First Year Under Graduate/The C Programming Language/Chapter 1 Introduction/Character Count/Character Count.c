#include <stdio.h>

int main(){
    long int NumberOfCharacter = 0;
    while ( getchar() != EOF){
        ++NumberOfCharacter;
    }
    printf("The number of character you input is %ld", NumberOfCharacter);
    return 0;
}