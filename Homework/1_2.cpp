// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main() {
    int score ;

    printf( "Enter your score " ) ;
    // รับค่าคะแนนสอบ
    if (scanf( "%d", &score ) != 1) {
        return 1 ; // Handle input failure   
    }
    // TODO: Implement the cascading if-else if-else logic here
    if ( score >= 80 ) {
        printf( "Grad A\n" ) ;
    } else if ( score >= 70 ) { 
        printf( "Grad B\n" ) ;
    } else if ( score >= 60 ) { 
        printf( "Grad C\n" ) ;
    } else if ( score >= 50 ) {
        printf( "Grad D\n" ) ;
    } else { 
        printf( "Grad F\n" ) ;
    }
    return 0 ;
}
