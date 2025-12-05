#include <stdio.h>
#include <string.h>

void explode( char str1[], char splitter, char str2[][ 10 ], int *count ) ;

int main()
{
    char out[ 20 ][ 10 ] ;
    int num ;
    int i ;

    explode( "I/Love/You", '/', out, &num ) ;

    for ( i = 0 ; i < num ; i++ ) {
        printf( "str2[%d] = \"%s\"\n", i, out[ i ] ) ;
    }

    printf( "\ncount = %d\n", num ) ;

    return 0 ;
}

void explode( char str1[], char splitter, char str2[][ 10 ], int *count )
{
    int len = strlen( str1 ) ;
    int i ;
    int row = 0 ;
    int col = 0 ;

    for ( i = 0 ; i < len ; i++ ) {
        if ( str1[ i ] == splitter ) {
            str2[ row ][ col ] = '\0' ;
            row++ ;
            col = 0 ;
        } else {
            str2[ row ][ col ] = str1[ i ] ;
            col++ ;
        }
    }

    str2[ row ][ col ] = '\0' ;
    *count = row + 1 ;
}
