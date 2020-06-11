#include <stdio.h>

int main() {

    char ch1 ;
    char ch2 ;

    printf("변환할 영문자 입력 : ") ;
    scanf("%c", &ch1);

    if ( 'A' <= ch1 && ch1 <= 'Z' ) {
        ch2 = ch1 + 32;
    }

    if ( 'a' <= ch1 && ch1 <= 'z' ) {
        ch2 = ch1 - 32;
    }

    printf("입력한 문자 : %c\n", ch1);
    printf("변환된 문자 : %c", ch2);

    return 0;
}