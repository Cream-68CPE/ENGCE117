#include <stdio.h>
#include <string.h>

char* reverse( char str1[] ) ;

int main() {
    char text[ 50 ] = "I Love You" ;
    char *out ;
    
    out = reverse( text ) ;
    
    printf( "%s\n", out ) ;
    
    return 0 ;
}

char* reverse( char str1[] ) {
    int len = strlen( str1 ) ;
    int i ;
    char temp ;
    
    for ( i = 0 ; i < len / 2 ; i++ ) {
        temp = str1[ i ] ;
        str1[ i ] = str1[ len - 1 - i ] ;
        str1[ len - 1 - i ] = temp ;
    }
    
    return str1 ;
}
