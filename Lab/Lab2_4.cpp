#include <stdio.h>
#include <string.h>

void explode( char str1[], char splitter, char str2[][ 10 ], int *count ) ;

int main()
{
    char str1[] = "I/Love/You" ;
    char splitter = '/' ;
    char str2[ 20 ][ 10 ] ;
    int count ;
    int i ;

    explode( str1, splitter, str2, &count ) ;

    for ( i = 0 ; i < count ; i++ ) {
        printf( "str2[%d] = \"%s\"\n", i, str2[ i ] ) ;
    }

    printf( "\ncount = %d\n", count ) ;

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
