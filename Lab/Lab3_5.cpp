#include <stdio.h>
#include <stdlib.h> 

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

struct student ( *GetStudent( int *room ) )[ 10 ] ;

int main() {
    
    struct student ( *children )[ 10 ] ;
    int group ;
    
    // --- PROCESS ---
    children = GetStudent( &group ) ;
    
    // --- OUTPUT ---
    printf( "\n--- Displaying Data ---\n" ) ;
    for ( int i = 0 ; i < group ; i++ ) {
        
        for ( int j = 0 ; j < 10 ; j++ ) {
            
            printf( "Room %d, Student %d: %s\n", i + 1, j + 1, children[ i ][ j ].name ) ;
            
        }
        
    }
    
    free( children ) ;
    
    return 0 ;
    
}

struct student ( *GetStudent( int *room ) )[ 10 ] {
    
    // --- INPUT ---
    printf( "Enter number of rooms: " ) ;
    scanf( "%d", room ) ;
    
    // --- PROCESS ---
    struct student ( *child )[ 10 ] = malloc( ( *room ) * sizeof( struct student [ 10 ] ) ) ;
    
    for ( int i = 0 ; i < *room ; i++ ) {
        
        printf( "Classroom %d:\n", i + 1 ) ;
        
        for ( int j = 0 ; j < 10 ; j++ ) {
            
            printf( "  Name for student %d: ", j + 1 ) ;
            scanf( "%s", child[ i ][ j ].name ) ;
            
            child[ i ][ j ].age = 20 ;
            child[ i ][ j ].sex = 'M' ;
            child[ i ][ j ].gpa = 3.00 ;
            
        }
        
    }
    
    return child ;
    
}
