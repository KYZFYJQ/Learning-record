#include <stdio.h>

int main(){
    //Initialization
    int NumberofDigits[10], NumberWhiteSpace = 0, NumberOther = 0;
    int __char;
    for (int i = 0; i < 10; ++i){
        NumberofDigits[i] = 0;
    }

    //main body
    while ( (__char = getchar()) != EOF ){
        if ( __char >= '0' && __char <= '9' ){
            ++NumberofDigits[__char - '0'];
        }else if (__char == ' ' || __char == '\n' || __char == '\t'){
            ++NumberWhiteSpace;
        }else{
            ++NumberOther;
        }
    }
    
    //output
    printf("The number of digits is\n");
    for (int j = 0; j < 10; j++){
        printf("%d : %d,", j, NumberofDigits[j]);
    }
    printf("\n The number of space is %d, others is %d", NumberWhiteSpace, NumberOther);
    return 0;
}