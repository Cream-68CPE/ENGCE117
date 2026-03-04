#include <stdio.h>

int KnapsackBT( int *w, int *v, int n, int wx, int i, int *x ) ;

int main() {
    
    int n = 5, wx = 11 ;
    int w[ 5 ] = { 1, 2, 5, 6, 7 } ;
    int v[ 5 ] = { 1, 6, 18, 22, 28 } ;
    int *x, vx ;
    
    x = new int[ n ] ;
    vx = KnapsackBT( w, v, n, wx, 0, x ) ;
    
    printf( "Value = %d\n", vx ) ; 
    for( int i = 0 ; i < n ; i++ ) {
        printf( "%d ", x[ i ] ) ;
    }
    
    return 0 ;
}

int KnapsackBT( int *w, int *v, int n, int wx, int i, int *x ) {
    
    if ( i == n ) {
        return 0 ;
    }
    
    int *x1 = new int[ n ] ;
    int val1 = KnapsackBT( w, v, n, wx, i + 1, x1 ) ;
    
    int *x2 = new int[ n ] ;
    int val2 = -1 ;
    
    if ( w[ i ] <= wx ) {
        
        val2 = v[ i ] + KnapsackBT( w, v, n, wx - w[ i ], i + 1, x2 ) ;
        
    }
    
    int best_val = 0 ;
    
    if ( val2 > val1 ) {
        
        x[ i ] = 1 ;
        for ( int j = i + 1 ; j < n ; j++ ) {
            x[ j ] = x2[ j ] ;
        }
        best_val = val2 ;
        
    } else {
        
        x[ i ] = 0 ;
        for ( int j = i + 1 ; j < n ; j++ ) {
            x[ j ] = x1[ j ] ;
        }
        best_val = val1 ;
        
    }
    
    delete[] x1 ;
    delete[] x2 ;
    
    return best_val ;
}
