#include <stdio.h>

void go( int ***p, int **z ) ;

int main() {
    
    int *b = new int ; *b = 10 ;
    int *c = new int ; *c = 20 ;
    int **a ;
    
    // --- PROCESS 1 ---
    go( &a, &b ) ;
    
    // --- OUTPUT 1 ---
    printf( "%d %p %p %p\n", **a, *a, a, &a ) ;
    
    // --- PROCESS 2 ---
    go( &a, &c ) ;
    
    // --- OUTPUT 2 ---
    printf( "%d %p %p %p\n", **a, *a, a, &a ) ;
    
    return 0 ;
    
}

void go( int ***p, int **z ) {
    *p = z ; 
}
