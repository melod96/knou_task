#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {

    char arr[50][10];
    int cnt = 0;

    printf("평균과 표준편차를 구할 숫자를 입력해주세요.\n") ;
    printf("입력을 다 했을 시 a를 누르면 계산으로 넘어갑니다.\n") ;
    
    // 

    for ( int i = 0 ; i < 50 ; i++ ) {
        char ch[10] ;
        scanf("%s", &ch);

        if ( strcmp(ch, "a") == 0 || strcmp(ch, "A") == 0) {
            if ( i == 0 ){
                printf("숫자를 입력해주세요\n");
                continue;
            }
            printf("계산으로 넘어갑니다.\n");
            cnt = i;
            break;
        }

        strcpy(arr[i], ch);

        if ( i == 49 ) {
            printf("최대입력 가능 개수까지 입력하셨습니다.\n");
            printf("계산으로 넘어갑니다.\n");
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

    printf("평군 : %.3lf, 분산 : %.3lf, 표준편차 : %3lf\n", avg, vari, std);

    return 0;
}