#include <stdio.h>

int main()
{
    int A[ 2 ][ 3 ] ;
    int B[ 2 ][ 3 ] ;
    int BT[ 3 ][ 2 ] ;
    int C[ 2 ][ 2 ] ;
    int i, j, k ;

    printf( "Enter elements for Matrix A (2x3):\n" ) ;
    for ( i = 0 ; i < 2 ; i++ ) {
        for ( j = 0 ; j < 3 ; j++ ) {
            printf( "A[%d][%d]: ", i, j ) ;
            scanf( "%d", &A[ i ][ j ] ) ;
        }
    }

    printf( "\nEnter elements for Matrix B (2x3):\n" ) ;
    for ( i = 0 ; i < 2 ; i++ ) {
        for ( j = 0 ; j < 3 ; j++ ) {
            printf( "B[%d][%d]: ", i, j ) ;
            scanf( "%d", &B[ i ][ j ] ) ;
        }
    }

    // Transpose B (2x3) -> BT (3x2)
    for ( i = 0 ; i < 2 ; i++ ) {
        for ( j = 0 ; j < 3 ; j++ ) {
            BT[ j ][ i ] = B[ i ][ j ] ;
        }
    }

    // Multiply A (2x3) x BT (3x2) -> C (2x2)
    for ( i = 0 ; i < 2 ; i++ ) {
        for ( j = 0 ; j < 2 ; j++ ) {
            C[ i ][ j ] = 0 ;
            for ( k = 0 ; k < 3 ; k++ ) {
                C[ i ][ j ] += A[ i ][ k ] * BT[ k ][ j ] ;
            }
        }
    }

    printf( "\n--- MATRIX REPORT ---\n" ) ;

    printf( "\nMatrix A (2x3):\n" ) ;
    for ( i = 0 ; i < 2 ; i++ ) {
        for ( j = 0 ; j < 3 ; j++ ) {
            printf( "%4d ", A[ i ][ j ] ) ;
        }
        printf( "\n" ) ;
    }

    printf( "\nMatrix B (2x3):\n" ) ;
    for ( i = 0 ; i < 2 ; i++ ) {
        for ( j = 0 ; j < 3 ; j++ ) {
            printf( "%4d ", B[ i ][ j ] ) ;
        }
        printf( "\n" ) ;
    }

    printf( "\nMatrix B Transposed (3x2):\n" ) ;
    for ( i = 0 ; i < 3 ; i++ ) {
        for ( j = 0 ; j < 2 ; j++ ) {
            printf( "%4d ", BT[ i ][ j ] ) ;
        }
        printf( "\n" ) ;
    }

    printf( "\nResult Matrix C (2x2):\n" ) ;
    for ( i = 0 ; i < 2 ; i++ ) {
        for ( j = 0 ; j < 2 ; j++ ) {
            printf( "%4d ", C[ i ][ j ] ) ;
        }
        printf( "\n" ) ;
    }

    return 0 ;
}
