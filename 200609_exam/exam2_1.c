#include <stdio.h>

int main() {

    char ch1 ;
    char ch2 ;

    printf("��ȯ�� ������ �Է� : ") ;
    scanf("%c", &ch1);

    if ( 'A' <= ch1 && ch1 <= 'Z' ) {
        ch2 = ch1 + 32;
    }

    if ( 'a' <= ch1 && ch1 <= 'z' ) {
        ch2 = ch1 - 32;
    }

    printf("�Է��� ���� : %c\n", ch1);
    printf("��ȯ�� ���� : %c", ch2);

    return 0;
}