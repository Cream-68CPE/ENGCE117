
#include <stdio.h>

void go( int **p, int *z ) ;

int main() {
    
    int *a, b = 10, c = 20 ;
    
    // --- PROCESS 1 ---
    go( &a, &b ) ;
    
    // --- OUTPUT 1 ---
    printf( "%d %p %p\n", *a, a, &a ) ;
    
    // --- PROCESS 2 ---
    go( &a, &c ) ;
    
    // --- OUTPUT 2 ---
    printf( "%d %p %p\n", *a, a, &a ) ;
    
    return 0 ;
    
}

void go( int **p, int *z ) {
    *p = z ; 
}
