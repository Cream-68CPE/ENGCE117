// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main() {
    int N, sum = 0, i ;
    
    printf( "Enter Number " ) ;
    // รับค่า N
    if (scanf ( "%d", &N ) != 1 ) {
        return 1 ; // Handle input failure
    }
    
    // TODO: Implement the for loop to calculate the sum from 1 to N
    for ( i = 1; i <= N; i++ ) {
        sum = sum + i ; 
    }

    printf( "%d\n", sum ) ;
    return 0 ;
}
