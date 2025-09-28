// #include <stdio.h>

// int main(){
//     int get_char;
//     get_char = getchar();
//     while(get_char != EOF){
//         putchar(get_char);
//         get_char = getchar();
//     }
//     return 0;
// }



// #include <stdio.h>

// int main(){
//     int __char;
//     while( (__char = getchar()) != EOF ){
//         putchar(__char);
//     }
//     return 0;
// }



#include <stdio.h>

int main(){
    int __char;
    while ( (__char = getchar() ) != EOF ){
        putchar(__char);
    }
    printf("__char = %d", __char);
    return 0;
}