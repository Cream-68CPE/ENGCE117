#include <stdio.h>

int main()
{
    int temps[7] ;
    int i ;
    int maxTemp ;

    printf( "Enter temperatures for 7 days :\n" ) ;
    for ( i = 0 ; i < 7 ; i++ ) {
        printf( "Day %d : ", i + 1 ) ;
        scanf( "%d", &temps[i] ) ;
    }

    maxTemp = temps[0] ;
    for ( i = 1 ; i < 7 ; i++ ) {
        if ( temps[i] > maxTemp ) {
            maxTemp = temps[i] ;
        }
    }

    printf( "\n--- Report ---\n" ) ;
    printf( "Recorded Temperatures : " ) ;
    for ( i = 0 ; i < 7 ; i++ ) {
        printf( "%d ", temps[i] ) ;
    }
    printf( "\n" ) ;

    printf( "Maximum Temperature : %d Celsius\n", maxTemp ) ;

    if ( maxTemp >= 35 ) {
        printf( "Weather is HOT!\n" ) ;
    } else {
        printf( "Weather is MODERATE.\n" ) ;
    }

    return 0 ;
}
