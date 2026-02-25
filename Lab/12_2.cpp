int *KnapsackGreedy( int *w, int *v, int n, int wx ) {
    static int x[ 5 ] ; 
    int i, j, best_idx ;
    float max_ratio, ratio ;
    
    for ( i = 0 ; i < n ; i++ ) {
        x[ i ] = 0 ;
    }

    for ( i = 0 ; i < n ; i++ ) {
        max_ratio = -1.0 ;
        best_idx = -1 ;

        for ( j = 0 ; j < n ; j++ ) {
            if ( x[ j ] == 0 ) {
                ratio = ( float ) v[ j ] / w[ j ] ;
                if ( ratio > max_ratio ) {
                    max_ratio = ratio ;
                    best_idx = j ;
                }
            }
        }

        if ( best_idx != -1 ) {
            if ( w[ best_idx ] <= wx ) {
                x[ best_idx ] = 1 ;
                wx -= w[ best_idx ] ;
            } else {
                x[ best_idx ] = -1 ; 
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
