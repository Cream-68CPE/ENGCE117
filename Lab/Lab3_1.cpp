#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

void upgrade( struct student child ) ;

int main() {
    
    struct student aboy ;
    
    // --- INPUT ---
    aboy.sex = 'G' ;
    aboy.gpa = 3.00 ;
    
    // --- PROCESS ---
    upgrade( aboy ) ;
    
    // --- OUTPUT ---
    printf( "GPA in main : %.2f\n", aboy.gpa ) ;
    
    return 0 ;
    
}

void upgrade( struct student child ) {
    
    // --- INPUT (Local) ---

    // --- PROCESS ---
    if ( child.sex == 'B' ) {
        
        child.gpa = child.gpa * 1.10 ;
        
    } else if ( child.sex == 'G' ) {
        
        child.gpa = child.gpa * 1.20 ;
        
    }
    
    // --- OUTPUT ---
    printf( "GPA [%c]: %.2f\n", child.sex, child.gpa ) ;
    
}
