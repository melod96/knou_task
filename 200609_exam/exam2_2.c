#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {

    char arr[50][10];
    int cnt = 0;

    printf("��հ� ǥ�������� ���� ���ڸ� �Է����ּ���.\n") ;
    printf("�Է��� �� ���� �� a�� ������ ������� �Ѿ�ϴ�.\n") ;
    
    // 

    for ( int i = 0 ; i < 50 ; i++ ) {
        char ch[10] ;
        scanf("%s", &ch);

        if ( strcmp(ch, "a") == 0 || strcmp(ch, "A") == 0) {
            if ( i == 0 ){
                printf("���ڸ� �Է����ּ���\n");
                continue;
            }
            printf("������� �Ѿ�ϴ�.\n");
            cnt = i;
            break;
        }

        strcpy(arr[i], ch);

        if ( i == 49 ) {
            printf("�ִ��Է� ���� �������� �Է��ϼ̽��ϴ�.\n");
            printf("������� �Ѿ�ϴ�.\n");
            cnt = i+1;
            break;
        }
    }

    // 
    
    int sum, num1 = 0 ;
    double avg, vari, std = 0;

    for ( int i = 0 ; i < cnt ; i++ ) {
        sum += atoi(arr[i]);
    }

    avg = (double) sum / cnt ;

    for ( int i = 0 ; i < cnt ; i++ ) {
        vari = vari + ( atoi(arr[i]) - avg ) * ( atoi(arr[i]) - avg );
    }
    vari = (double) vari / cnt;
    std = sqrt(vari);

    printf("�� : %.3lf, �л� : %.3lf, ǥ������ : %3lf\n", avg, vari, std);

    return 0;
}