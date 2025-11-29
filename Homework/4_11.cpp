#include <stdio.h>

int main()
{
    int matrix[ 2 ][ 4 ] ;
    int totalSum = 0 ;
    int i, j ;

    printf( "Enter 8 numbers for 2x4 matrix:\n" ) ;

    for ( i = 0 ; i < 2 ; i++ ) {
        for ( j = 0 ; j < 4 ; j++ ) {
            printf( "Enter element [%d][%d] : ", i, j ) ;
            scanf( "%d", &matrix[ i ][ j ] ) ;
        }
    }

    for ( i = 0 ; i < 2 ; i++ ) {
        for ( j = 0 ; j < 4 ; j++ ) {
            totalSum += matrix[ i ][ j ] ;
        }
    }

    printf( "\n--- Matrix Report ---\n" ) ;
    
    printf( "Matrix Content:\n" ) ;
    for ( i = 0 ; i < 2 ; i++ ) {
        for ( j = 0 ; j < 4 ; j++ ) {
            printf( "%d\t", matrix[ i ][ j ] ) ;
        }
        printf( "\n" ) ;
    }

    printf( "Total Sum : %d\n", totalSum ) ;

    return 0 ;
}
