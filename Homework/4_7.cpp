#include <stdio.h>

int main()
{
    int data[ 10 ] ;
    int n ;
    int searchValue ;
    int count = 0 ;
    int i ;

    printf( "Enter number of elements (N) : " ) ;
    scanf( "%d", &n ) ;

    for ( i = 0 ; i < n ; i++ ) {
        printf( "Enter value %d : ", i + 1 ) ;
        scanf( "%d", &data[ i ] ) ;
    }

    printf( "Enter Search Value : " ) ;
    scanf( "%d", &searchValue ) ;

    for ( i = 0 ; i < n ; i++ ) {
        if ( data[ i ] == searchValue ) {
            count++ ;
        }
    }

    printf( "\n--- Report ---\n" ) ;
    
    printf( "Recorded values : " ) ;
    for ( i = 0 ; i < n ; i++ ) {
        printf( "%d ", data[ i ] ) ;
    }
    printf( "\n" ) ;

    printf( "Search Value : %d\n", searchValue ) ;
    printf( "Frequency : %d\n", count ) ;

    return 0 ;
}
