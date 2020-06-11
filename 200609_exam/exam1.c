#include <stdio.h>

int main() {

    int tmp1[10] = {1,2,3,4,5,6,7,8,9,10};

    int rs1 = 0;
    int rs2 = 0;

    for ( int i = 0 ; i < (int)sizeof(tmp1)/sizeof(int) ; i++ ) {
        if ( tmp1[i] % 2 == 0 ) {
            rs1 += tmp1[i];
        } else {
            rs2 += tmp1[i];
        }
    }

    printf("Â¦¼öÀÇ ÇÕ : %i\n", rs1);
    printf("È¦¼öÀÇ ÇÕ : %i", rs2);

    return 0;
}