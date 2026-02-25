#include <stdio.h>
#include <stdlib.h>

int getBestItem( int *w, int *v, int *x, int n ) {
    
    int best = -1 ;
    float max_r = -1.0 ;
    float r ;
    int j ;

    for ( j = 0 ; j < n ; j++ ) {

        if ( x[ j ] == 0 ) {

            r = ( float ) v[ j ] / w[ j ] ;
            
            if ( r > max_r ) {
                max_r = r ;
                best = j ;
            }
            
        }
        
    }

    return best ;
}

int *KnapsackGreedy( int *w, int *v, int n, int wx ) {

    int *x = ( int * ) calloc( n, sizeof( int ) ) ;
    int i, best ;

    if ( x == NULL ) {
        return NULL ;
    }

    for ( i = 0 ; i < n ; i++ ) {
        
        best = getBestItem( w, v, x, n ) ;

        if ( best != -1 ) {

            if ( w[ best ] <= wx ) {
                x[ best ] = 1 ;
                wx -= w[ best ] ; 
            } else {
                x[ best ] = -1 ;
            }
            
        }
        
    }

    for ( i = 0 ; i < n ; i++ ) {
        
        if ( x[ i ] == -1 ) {
            x[ i ] = 0 ;
        }
        
    }

    return x ;
}

int main()
{
    int n, wx ;
    int i ;
    
    printf( "Enter number of items : " ) ;
    if ( scanf( "%d", &n ) != 1 ) {
        return 1 ;
    }
    
    printf( "Enter max capacity of knapsack : " ) ;
    if ( scanf( "%d", &wx ) != 1 ) {
        return 1 ;
    }

    int *w = ( int * ) malloc( n * sizeof( int ) ) ;
    int *v = ( int * ) malloc( n * sizeof( int ) ) ;
    
    if ( w == NULL || v == NULL ) {
        return 1 ;
    }

    for ( i = 0 ; i < n ; i++ ) {
        
        printf( "Enter weight and value for item %d (e.g. 10 60) : ", i + 1 ) ;
        
        if ( scanf( "%d %d", &w[ i ], &v[ i ] ) != 2 ) {
            return 1 ;
        }
        
    }
    
    int *result = KnapsackGreedy( w, v, n, wx ) ;

    printf( "\n--- Results ---\n" ) ;
    for ( i = 0 ; i < n ; i++ ) {
        printf( "Item %d : %s\n", i + 1, result[ i ] == 1 ? "Selected" : "Not Selected" ) ;
    }

    free( w ) ;
    free( v ) ;
    free( result ) ;
    
    return 0;
}
