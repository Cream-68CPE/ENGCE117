#include <stdio.h>

void GetSet( int [] , int * ) ;

int main() {
    
    int *data, num ;
    
    GetSet( (int *)&data , &num ) ;
    
    return 0 ;
    
}

void GetSet( int set[] , int *num ) {
    
    static int buffer[ 100 ] ;
    
    int **ptrToData = ( int ** ) set ;
    
    *ptrToData = buffer ;
    
    scanf( "%d" , num ) ;
    
    int i = 0 ;
    for ( i = 0 ; i < *num ; i++ ) {
        
        scanf( "%d" , &buffer[ i ] ) ;
        
    }
    
}
