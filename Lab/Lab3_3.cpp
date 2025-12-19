#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

struct student upgrade( struct student child ) ;

int main() {
    
    struct student aboy ;
    
    // --- INPUT ---
    aboy.sex = 'B' ;
    aboy.gpa = 3.00 ;
    
    // --- PROCESS ---
    aboy = upgrade( aboy ) ;
    
    // --- OUTPUT ---
    printf( "GPA in main : %.2f\n", aboy.gpa ) ;
    
    return 0 ;
    
}

struct student upgrade( struct student child ) {
    
    // --- PROCESS ---
    if ( child.sex == 'B' ) {
        
        child.gpa = child.gpa * 1.10 ;
        
    } else if ( child.sex == 'G' ) {
        
        child.gpa = child.gpa * 1.20 ;
        
    }
    
    // --- OUTPUT (Local) ---
    printf( "GPA [%c] inside function : %.2f\n", child.sex, child.gpa ) ;
    
    return child ;
    
}
