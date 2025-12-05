#include <stdio.h>
#include <stdlib.h>

int *GetSet( int * ) ;

int main() {
    
    int *data ;
    int num ;
    
    data = GetSet( &num ) ;
    
    return 0 ;
    
}

int *GetSet( int *cnt ) {
    
    scanf( "%d" , cnt ) ;
    
    int *dynamicBlock ;
    dynamicBlock = ( int * ) malloc( *cnt * sizeof(int) ) ;
    
    if ( dynamicBlock == NULL ) return NULL ;

    int i = 0 ;
    for ( i = 0 ; i < *cnt ; i++ ) {
        
        scanf( "%d" , ( dynamicBlock + i ) ) ;
        
    }
    
    return dynamicBlock ;
    
}
