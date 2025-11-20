#include <stdio.h>

int main() {
    int N, i ;

    printf( "Enter Number: " ) ;

    // รับค่า N (จำนวนรอบ)
    if ( scanf( "%d" , &N ) != 1 ) {
        return 1 ; // Handle input failure (จัดการเมื่อป้อนค่าที่ไม่ใช่ตัวเลข)
    }

    // ตรวจสอบเงื่อนไข: N ต้องมากกว่าหรือเท่ากับ 1
    if (N < 1) {
        printf( "Error\n" ) ;
    } else {
        // Implement the for loop to print the message N times
        for ( i = 0; i < N; i++ ) {
            printf( "Hello Loop!\n" ) ; 
        }
    }

    return 0 ;
}
