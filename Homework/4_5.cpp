#include <stdio.h>

int main()
{
    int numbers[6] ;
    int i ;
    int sum = 0 ;

    printf( "Enter 6 positive integers :\n" ) ;
    for ( i = 0 ; i < 6 ; i++ ) {
        printf( "Number %d : ", i + 1 ) ;
        scanf( "%d", &numbers[i] ) ;
    }

    for ( i = 0 ; i < 6 ; i++ ) {
        sum += numbers[i] ;
    }

    printf( "\n--- Report ---\n" ) ;
    printf( "Recorded Numbers : " ) ;
    for ( i = 0 ; i < 6 ; i++ ) {
        printf( "%d ", numbers[i] ) ;
    }
    printf( "\n" ) ;

    printf( "Total Sum : %d\n", sum ) ;

    return 0 ;
}
