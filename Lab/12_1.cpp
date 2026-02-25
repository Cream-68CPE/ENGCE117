int *Dijkstra( int *L, int n ) {
    static int d[ 5 ] ;
    int visited[ 5 ] = { 0, 0, 0, 0, 0 } ;
    int i, j, u, v, min ;

    for ( i = 0 ; i < n ; i++ ) {
        d[ i ] = 9999 ;
    }

    d[ 0 ] = 0 ;

    for ( i = 0 ; i < n ; i++ ) {
        min = 9999 ;
        for ( j = 0 ; j < n ; j++ ) {
            if ( !visited[ j ] && d[ j ] < min ) {
                min = d[ j ] ;
                u = j ;
            }
        }

        visited[ u ] = 1 ;

        for ( v = 0 ; v < n ; v++ ) {
            int weight = L[ u * n + v ] ;
            if ( !visited[ v ] && weight != -1 ) {
                if ( d[ u ] + weight < d[ v ] ) {
                    d[ v ] = d[ u ] + weight ;
                }
            }
        }
    }

    static int res[ 4 ] ;
    res[ 0 ] = d[ 1 ] ;
    res[ 1 ] = d[ 2 ] ;
    res[ 2 ] = d[ 3 ] ;
    res[ 3 ] = d[ 4 ] ;

    return res ;
}
