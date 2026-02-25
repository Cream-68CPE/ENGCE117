#include <stdio.h>

long SumLoop( int n ) ;
long SumRecur( int n ) ;

int main()
{
    printf( "SumLoop(n) = %d\n", SumLoop( 10 ) ) ;
    printf( "SumRecur(n) = %d\n", SumRecur( 10 ) ) ;
    
    return 0 ;
}

long SumLoop( int n )
{
    long sum = 0 ;
    int i ;
    
    for ( i = 1 ; i <= n ; i++ ) {
        
        sum += i ;
        
    }
    
    return sum ;
}

long SumRecur( int n )
{
    if ( n <= 0 ) {
        
        return 0 ;
        
    }
    
    return n + SumRecur( n - 1 ) ;
}
