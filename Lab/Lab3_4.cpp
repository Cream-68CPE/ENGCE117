#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

void GetStudent( struct student child[][ 10 ], int *room ) ;
void showResult( struct student child[][ 10 ], int room ) ;

int main() {
    
    struct student children[ 20 ][ 10 ] ;
    int group ;
    
    GetStudent( children, &group ) ;
    
    showResult( children, group ) ;
    
    return 0 ;
    
}

void GetStudent( struct student child[][ 10 ], int *room ) {
    
    printf( "Enter number of classrooms (1-20): " ) ;
    scanf( "%d", room ) ;

    if ( *room < 1 || *room > 20 ) {
        printf( "Invalid number of classrooms. Please run again.\n" ) ;
        return ;
    }

    for ( int i = 0 ; i < *room ; i++ ) {
        
        printf( "\n--- Classroom %d ---\n", i + 1 ) ;
        
        for ( int j = 0 ; j < 10 ; j++ ) {
            
            printf( "  Student %d Name: ", j + 1 ) ;
            scanf( "%s", child[ i ][ j ].name ) ;
            
            printf( "  Student %d Age: ", j + 1 ) ;
            scanf( "%d", &child[ i ][ j ].age ) ;
            
            printf( "  Student %d Sex (M/F): ", j + 1 ) ;
            scanf( " %c", &child[ i ][ j ].sex ) ; 
            
            printf( "  Student %d GPA: ", j + 1 ) ;
            scanf( "%f", &child[ i ][ j ].gpa ) ;
            
            printf( "\n" ) ;
            
        }
        
    }
    
}

void showResult( struct student child[][ 10 ], int room ) {
    
    if ( room < 1 || room > 20 ) {
        return ;
    }


    for ( int i = 0 ; i < room ; i++ ) {
        
        printf( "\nClassroom %d:\n", i + 1 ) ;
        
        for ( int j = 0 ; j < 10 ; j++ ) {
            
            printf( "%2d. Name: %-10s | Age: %d | Sex: %c | GPA: %.2f\n", 
                    j + 1, 
                    child[ i ][ j ].name, 
                    child[ i ][ j ].age, 
                    child[ i ][ j ].sex, 
                    child[ i ][ j ].gpa ) ;
                    
        }
        
    }
    
}
