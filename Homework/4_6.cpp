#include <stdio.h>

int main()
{
    int scores[ 5 ] ;
    int sum = 0 ;
    float average ;
    int countAboveAvg = 0 ;
    int i ;

    for ( i = 0 ; i < 5 ; i++ ) {
        printf( "Enter score %d : ", i + 1 ) ;
        scanf( "%d", &scores[ i ] ) ;
    }

    for ( i = 0 ; i < 5 ; i++ ) {
        sum += scores[ i ] ;
    }

    average = ( float ) sum / 5 ;

    for ( i = 0 ; i < 5 ; i++ ) {
        if ( scores[ i ] > average ) {
            countAboveAvg++ ;
        }
    }

    printf( "\n" ) ;

    printf( "Recorded Scores: " ) ;
    for ( i = 0 ; i < 5 ; i++ ) {
        printf( "%d ", scores[ i ] ) ;
    }
    printf( "\n" ) ;

    printf( "Total Sum: %d\n", sum ) ;

    printf( "Average Score: %.2f\n", average ) ;

    printf( "Number of Scores Above Average: %d\n", countAboveAvg ) ;

    return 0 ;
}
