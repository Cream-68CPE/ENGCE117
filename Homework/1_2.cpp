#include <stdio.h>

int main() {
    int score ;
    
    if (scanf ( "%d" , &score ) != 1 ) {
        return 1 ;
    }
    
    if( score <= 49 ) {
        
        printf( "Grade F" ) ;
        
    }else if ( score >= 50 && score <= 54 ) {
        
        printf( "Grade D") ;
        
    }else if ( score >= 55 && score <= 59 ) {
        
        printf( "Grade D+") ;
        
    }else if ( score >= 60 && score <= 64 ) {
        
        printf( "Grade C") ;
        
    }else if ( score >= 65 && score <= 69 ) {
        
        printf( "Grade C+") ;
        
    }else if ( score >= 70 && score <= 74 ) {
        
        printf( "Grade B") ;
        
    }else if ( score >= 75 && score <= 79 ) {
        
        printf( "Grade B+") ;
        
    }else if ( score >= 80 ) {
        
        printf( "Grade A") ;
        
    }else {
        
        printf( "Error !!!" ) ;
    }
    
    return 0 ;
}
