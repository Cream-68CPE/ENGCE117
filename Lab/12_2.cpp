int *KnapsackGreedy( int *w, int *v, int n, int wx ) {
    static int x[ 5 ] ;
    int i, j, best ;
    float max_r, r ;

    for ( i = 0 ; i < n ; i++ ) {
        x[ i ] = 0 ;
    }

    for ( i = 0 ; i < n ; i++ ) {
        max_r = -1.0 ;
        best = -1 ;

        for ( j = 0 ; j < n ; j++ ) {
            if ( x[ j ] == 0 ) {
                r = ( float ) v[ j ] / w[ j ] ;
                if ( r > max_r ) {
                    max_r = r ;
                    best = j ;
                }
            }
        }

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
