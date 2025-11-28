#include <stdio.h>

int main()
{
    int N ;
    int i ;
    int passSum = 0 ;
    int failCount = 0 ;

    if ( scanf( "%d", &N ) != 1 ) {
        return 1 ;
    }

    int scores[N] ;

    for ( i = 0 ; i < N ; i++ ) {
        
        scanf( "%d", &scores[i] ) ;

        if ( scores[i] >= 50 ) {
            passSum += scores[i] ;
        } else {
            failCount++ ;
        }
    }

    printf( "Pass Sum: %d\n", passSum ) ;
    printf( "Fail Count: %d\n", failCount ) ;

    return 0 ;
}
