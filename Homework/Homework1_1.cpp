// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main() {
    int N, i ;

    printf("Enter Number : ") ;
     // รับค่า N (จำนวนรอบ)หรือไม่
    if (scanf( "%d", &N) != 1 ) {
        return 1 ; // จบโปรแกรมด้วย Error Code
    }

    if (N <= 0) {
        printf("Error\n");
    } else {
        for ( i = 0 ; i < N ; i++ ) {
            printf( "Hello Loop!\n" ) ;
        }
    }

    return 0 ;
}
