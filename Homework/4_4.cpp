#include <stdio.h>

int main()
{
    int numbers[5] ;
    int i ;
    int evenCount = 0 ;
    int oddCount = 0 ;

    printf( "Enter 5 positive integers :\n" ) ;
    for ( i = 0 ; i < 5 ; i++ ) {
        printf( "Number %d : ", i + 1 ) ;
        scanf( "%d", &numbers[i] ) ;
    }
    for ( i = 0 ; i < 5 ; i++ ) {
        if ( numbers[i] % 2 == 0 ) {
            evenCount++ ;
        } else {
            oddCount++ ;
        }
    }
    printf( "\n--- Report ---\n" ) ;
    printf( "Recorded Numbers : " ) ;
    for ( i = 0 ; i < 5 ; i++ ) {
        printf( "%d ", numbers[i] ) ;
    }
    printf( "\n" ) ;

    printf( "Total Even Numbers : %d\n", evenCount ) ;
    printf( "Total Odd Numbers : %d\n", oddCount ) ;

    return 0 ;
}
