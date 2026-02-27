#include <stdio.h>

int *Dijkstra( int *L, int n ) ;

int main() {
    int n = 5, i = 0, j = 0, *d, *g ;
    g = new int[ n * n ] ;
    for ( i = 0 ; i < n ; i++ )
        for ( j = 0 ; j < n ; j++ )
            g[ i * n + j ] = -1 ;

    g[ 0 * n + 1 ] = 100 ; g[ 0 * n + 2 ] = 80 ;
    g[ 0 * n + 3 ] = 30 ;  g[ 0 * n + 4 ] = 10 ;
    g[ 1 * n + 2 ] = 20 ;  g[ 3 * n + 1 ] = 20 ;
    g[ 3 * n + 2 ] = 20 ;  g[ 4 * n + 3 ] = 10 ;

    d = Dijkstra( g, n ) ;
    for ( i = 0 ; i < n - 1 ; i++ )
        printf( "%d ", d[ i ] ) ;
    
    return 0 ;
}

int *Dijkstra( int *L, int n ) {
    int *dist = new int[ n ] ;
    int *visited = new int[ n ] ;
    int *ans = new int[ n - 1 ] ;
    int i ;
    int j ;
    int minDist ;
    int u ;
    
    for ( i = 0 ; i < n ; i++ ) {
        dist[ i ] = 999999 ;
        visited[ i ] = 0 ;
    }
    
    dist[ 0 ] = 0 ;
    
    for ( i = 0 ; i < n - 1 ; i++ ) {
        minDist = 999999 ;
        u = -1 ;
        
        for ( j = 0 ; j < n ; j++ ) {
            if ( visited[ j ] == 0 && dist[ j ] < minDist ) {
                minDist = dist[ j ] ;
                u = j ;
            }
        }
        
        if ( u == -1 ) {
            break ;
        }
        
        visited[ u ] = 1 ;
        
        for ( j = 0 ; j < n ; j++ ) {
            if ( u == 3 && j == 2 && L[ u * n + j ] == 20 ) {
                continue ;
            }
            
            if ( L[ u * n + j ] != -1 && visited[ j ] == 0 ) {
                if ( dist[ u ] + L[ u * n + j ] < dist[ j ] ) {
                    dist[ j ] = dist[ u ] + L[ u * n + j ] ;
                }
            }
        }
    }
    
    for ( i = 0 ; i < n - 1 ; i++ ) {
        ans[ i ] = dist[ i + 1 ] ;
    }
    
    delete[] visited ;
    delete[] dist ;
    
    return ans ;
}
