#include <stdio.h>
#include <stdlib.h>

int *KnapsackDP( int *w, int *v, int n, int wx ) {
    
    int i ;
    int j ;
    
    int **table = (int **)malloc( ( n + 1 ) * sizeof( int * ) ) ;
    
    for ( i = 0 ; i <= n ; i++ ) {
        table[ i ] = (int *)malloc( ( wx + 1 ) * sizeof( int ) ) ;
    }
    
    for ( i = 0 ; i <= n ; i++ ) {
        
        for ( j = 0 ; j <= wx ; j++ ) {
            
            if ( i == 0 || j == 0 ) {
                
                table[ i ][ j ] = 0 ;
                
            } else if ( w[ i - 1 ] <= j ) {
                
                int include_item = v[ i - 1 ] + table[ i - 1 ][ j - w[ i - 1 ] ] ;
                int exclude_item = table[ i - 1 ][ j ] ;
                
                if ( include_item > exclude_item ) {
                    table[ i ][ j ] = include_item ;
                } else {
                    table[ i ][ j ] = exclude_item ;
                }
                
            } else {
                
                table[ i ][ j ] = table[ i - 1 ][ j ] ;
                
            }
            
        }
        
    }
    
    int *x = (int *)malloc( n * sizeof( int ) ) ;
    
    for ( i = 0 ; i < n ; i++ ) {
        x[ i ] = 0 ;
    }
    
    int res = table[ n ][ wx ] ;
    int curr_w = wx ;
    
    for ( i = n ; i > 0 && res > 0 ; i-- ) {
        
        if ( res != table[ i - 1 ][ curr_w ] ) {
            
            x[ i - 1 ] = 1 ;
            res = res - v[ i - 1 ] ;
            curr_w = curr_w - w[ i - 1 ] ;
            
        }
        
    }
    
    for ( i = 0 ; i <= n ; i++ ) {
        free( table[ i ] ) ;
    }
    free( table ) ;
    
    return x ;
}

int main() {
    
    int n = 5 , wx = 11 ;
    int w[ 5 ] = { 1, 2, 5, 6, 7 } ;
    int v[ 5 ] = { 1, 6, 18, 22, 28 } ;
    int *x ;
    
    x = KnapsackDP( w, v, n, wx ) ;
    
    for( int i = 0 ; i < n ; i++ ) printf( "%d ", x[ i ] ) ;
    
    free( x ) ;
    
    return 0 ;
}
