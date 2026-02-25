#include <stdio.h>
#include <stdlib.h>

#define INF 9999
#define NO_EDGE -1

int getMinVertex( int *d, int *visited, int n ) {
    int min = INF ;
    int u = -1 ;
    int j ;
    
    for ( j = 0 ; j < n ; j++ ) {
        if ( !visited[ j ] && d[ j ] < min ) {
            min = d[ j ] ;
            u = j ;
        }
    }
    
    return u ;
}

int *Dijkstra( int *L, int n ) {
    
    int *d = ( int * ) malloc( n * sizeof( int ) ) ;
    int *visited = ( int * ) calloc( n, sizeof( int ) ) ;
    int i, u, v ;

   
    for ( i = 0 ; i < n ; i++ ) {
        d[ i ] = INF ;
    }

    d[ 0 ] = 0 ; 
    for ( i = 0 ; i < n ; i++ ) {
        
        u = getMinVertex( d, visited, n ) ;
        
        if ( u == -1 ) {
            break ; 
        }
        
        visited[ u ] = 1 ;

        for ( v = 0 ; v < n ; v++ ) {
            
            int weight = L[ u * n + v ] ;
            
            /* รวมเงื่อนไข if เพื่อลดความลึก (Nesting) */
            if ( !visited[ v ] && weight != NO_EDGE && ( d[ u ] + weight < d[ v ] ) ) {
                d[ v ] = d[ u ] + weight ;
            }
            
        }
    }

    free( visited ) ;
    
    return d ;
}

int main()
{
    int n = 5 ;
    int i ;
    int graph[] = {
        0, 10, NO_EDGE, 30, 100,
        10, 0, 50, NO_EDGE, NO_EDGE,
        NO_EDGE, 50, 0, 20, 10,
        30, NO_EDGE, 20, 0, 60,
        100, NO_EDGE, 10, 60, 0
    } ;

    int *distances = Dijkstra( graph, n ) ;
    
    printf( "Vertex Distance from Source (0) :\n" ) ;
    for ( i = 0 ; i < n ; i++ ) {
        printf( "Vertex %d : %d\n", i, distances[ i ] ) ;
    }

    free( distances ) ;

    return 0 ;
}
