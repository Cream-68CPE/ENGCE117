// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main() {
    int N, i;
    
    printf( "Enter Number: " ) ;
    
    // รับค่า N (จำนวนรอบ)
    if (scanf("%d", &N) != 1) {
        return 1; // Handle input failure
    } 
    
    if ( N < 1 ) {
        printf( "Error" ) ;
    } else {
        // TODO: Implement the for loop to print the message N times
        for (i = 0; i < N; i++)
         printf("Hello Loop!\n"); 
    }

    return 0;
}
