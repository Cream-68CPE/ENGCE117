#include <stdio.h>

int main()
{
    int N ;
    int i ;
    printf( "Enter number (N) : " ) ;
    if ( scanf( "%d", &N ) != 1 ) {
        return 1 ;
    }

    int numbers[N] ;

    for ( i = 0 ; i < N ; i++ ) {
        scanf( "%d", &numbers[i] ) ;
    }

    for ( i = N - 1 ; i >= 0 ; i-- ) {
        printf( "%d\n", numbers[i] ) ;
    }

    return 0 ;
}
