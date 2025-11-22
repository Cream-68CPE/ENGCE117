#include <stdio.h>

int main() {
    int number ;
    int evenSum = 0 ;
    int oddSum = 0 ;

    printf( "Enter number (0 to stop):\n" ) ;
    if ( scanf("%d", &number) != 1 ) {
        return 1 ;
    }
    while ( number != 0 ) {
        
        //ตรวจสอบว่าเป็นเลขคู่หรือเลขคี่
        if ( number % 2 == 0 ) {
            // ถ้าเป็นเลขคู่ (หาร 2 ลงตัว) เก็บใน evenSum
            evenSum += number ;
        } else {
            // ถ้าเป็นเลขคี่ เก็บใน oddSum
            oddSum += number ;
        }
        printf("Enter an integer (0 to stop):\n") ;
        if ( scanf( "%d", &number ) != 1 ) {
            break; 
        }
    }
    printf( "Even Sum: %d\n", evenSum ) ;
    printf( "Odd Sum: %d\n", oddSum ) ;
    return 0 ;
}
