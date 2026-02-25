#include <stdio.h>

void mergesort( int t[], int k ) ;
void merge( int *u, int m, int *v, int n, int *t ) ;

int main() {
    int data[ 7 ] = { 4, 6, 1, 2, 5, 1, 8 } ;
    int n = 7 ;
    
    mergesort( data, n ) ;
    
    for ( int i = 0 ; i < n ; i++ ) {
        printf( "%d ", data[ i ] ) ;
    }
    
    return 0 ;
}

void mergesort( int t[], int k ) {
    if ( k <= 1 ) {
        return ;
    }
    
    int mid = k / 2 ;
    int u[ mid ] ;
    int v[ k - mid ] ;
    
    for ( int i = 0 ; i < mid ; i++ ) {
        u[ i ] = t[ i ] ;
    }
    
    for ( int i = mid ; i < k ; i++ ) {
        v[ i - mid ] = t[ i ] ;
    }
    
    mergesort( u, mid ) ;
    mergesort( v, k - mid ) ;
    
    merge( u, mid, v, k - mid, t ) ;
}

void merge( int *u, int m, int *v, int n, int *t ) {
    int i = 0 ;
    int j = 0 ;
    int k = 0 ;
    
    while ( i < m && j < n ) {
        if ( u[ i ] <= v[ j ] ) {
            t[ k ] = u[ i ] ;
            i++ ;
        } else {
            t[ k ] = v[ j ] ;
            j++ ;
        }
        k++ ;
    }
    
    while ( i < m ) {
        t[ k ] = u[ i ] ;
        i++ ;
        k++ ;
    }
    
    while ( j < n ) {
        t[ k ] = v[ j ] ;
        j++ ;
        k++ ;
    }
}
