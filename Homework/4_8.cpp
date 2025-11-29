#include <stdio.h>

int main()
{
    int data[ 10 ] ;
    int visited[ 10 ] ;
    int n ;
    int i, j ;
    int count ;

    printf( "Enter number of elements (N) : " ) ;
    scanf( "%d", &n ) ;

    for ( i = 0 ; i < n ; i++ ) {
        printf( "Enter value %d : ", i + 1 ) ;
        scanf( "%d", &data[ i ] ) ;
        visited[ i ] = 0 ;
    }

    printf( "\n--- Report ---\n" ) ;

    printf( "Recorded values : " ) ;
    for ( i = 0 ; i < n ; i++ ) {
        printf( "%d ", data[ i ] ) ;
    }
    printf( "\n" ) ;

    printf( "\n--- Frequency Table ---\n" ) ;
    printf( "Value\tFrequency\n" ) ;

    for ( i = 0 ; i < n ; i++ ) {

        if ( visited[ i ] == 1 ) {
            continue ;
        }

        count = 1 ;

        for ( j = i + 1 ; j < n ; j++ ) {
            if ( data[ i ] == data[ j ] ) {
                count++ ;
                visited[ j ] = 1 ;
            }
        }

        printf( "%d\t%d\n", data[ i ], count ) ;
    }

    return 0 ;
}
