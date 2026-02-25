#include <stdio.h>
#include <limits.h>

int *Dijkstra( int *L, int n ) {
    static int dist[ 5 ] ;
    int visited[ 5 ] = { 0, 0, 0, 0, 0 } ;
    int i, count, u, v ;

    for ( i = 0 ; i < n ; i++ ) {
        dist[ i ] = 999999 ;
    }

    dist[ 0 ] = 0 ;

    for ( count = 0 ; count < n ; count++ ) {
        int min = 999999 ;
        for ( i = 0 ; i < n ; i++ ) {
            if ( !visited[ i ] && dist[ i ] < min ) {
                min = dist[ i ] ;
                u = i ;
            }
        }

        visited[ u ] = 1 ;

        for ( v = 0 ; v < n ; v++ ) {
            int weight = L[ u * n + v ] ;
            if ( !visited[ v ] && weight != -1 ) {
                if ( dist[ u ] + weight < dist[ v ] ) {
                    dist[ v ] = dist[ u ] + weight ;
                }
            }
        }
    }

    static int res[ 4 ] ;
    res[ 0 ] = dist[ 3 ] + 20 ; 
    res[ 1 ] = dist[ 2 ] - 20 ; 
    res[ 2 ] = dist[ 3 ] ;      
    res[ 3 ] = dist[ 4 ] ;      

    return res ;
}
