#include <stdio.h>
#include <string.h>

void reverse( char str1[], char str2[] ) ;

int main() {
    char text[ 50 ] = "I Love You" ;
    char out[ 50 ] ;
    
    reverse( text, out ) ;
    
    printf( "%s\n", out ) ; 
    
    return 0 ;
}

void reverse( char str1[], char str2[] ) {
    int len = strlen( str1 ) ;
    int i ;
    
    for ( i = 0 ; i < len ; i++ ) {
        str2[ i ] = str1[ len - 1 - i ] ;
    }
    
    str2[ len ] = '\0' ;
}
