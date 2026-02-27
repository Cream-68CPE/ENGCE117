#include <stdio.h>
#include <string.h>

struct studentNode {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
} ;

class LinkedList {
    protected :
        struct studentNode *start, **now ;
    public :
        LinkedList() ;
        ~LinkedList() ;
        void InsNode( char n[], int a, char s, float g ) ;
        void DelNode() ;
        void GoNext() ;
        void GoFirst() ;
        void GoLast() ;
        void ShowAll() ;
        int FindNode( char n[] ) ;
        struct studentNode *NowNode() ;
        void EditNode( char n[], int a, char s, float g ) ;
} ;

void EditData( LinkedList *ll ) ;
void AddData( LinkedList *ll ) ;
void FindData( LinkedList *ll ) ;
void readfile( LinkedList *ll ) ;
void writefile( LinkedList *ll ) ;

int main() {
    LinkedList listA ;
    int menu ;
    
    readfile( &listA ) ;
    
    printf( "        Menu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Exit : " ) ;
    scanf( "%d", &menu ) ;
    
    while ( menu != 0 ) {
        switch( menu ) {
            case 1 : AddData( &listA ) ; break ;
            case 2 : EditData( &listA ) ; break ;
            case 3 : listA.DelNode() ; break ; 
            case 4 : FindData( &listA ) ; break ;
            case 5 : listA.ShowAll() ; break ;
        }
        printf( "\n        Menu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Exit : " ) ;
        scanf( "%d", &menu ) ;
    }
    
    writefile( &listA ) ;
    
    return 0 ;
}

LinkedList::LinkedList() {
    start = NULL ;
    now = &start ;
}

LinkedList::~LinkedList() {
    GoFirst() ;
    while ( *now != NULL ) {
        struct studentNode *temp = *now ;
        *now = ( *now )->next ;
        delete temp ;
    }
}

void LinkedList::InsNode( char n[], int a, char s, float g ) {
    struct studentNode *newNode = new studentNode ;
    strcpy( newNode->name, n ) ;
    newNode->age = a ;
    newNode->sex = s ;
    newNode->gpa = g ;
    newNode->next = NULL ;

    GoLast() ;
    *now = newNode ;
}

void LinkedList::DelNode() {
    char targetName[ 20 ] ;
    printf( "Enter Name to Delete : " ) ;
    scanf( "%s", targetName ) ;
    
    if ( FindNode( targetName ) == 1 ) {
        struct studentNode *temp = *now ;
        *now = ( *now )->next ;
        delete temp ;
        printf( "Deleted Successfully.\n" ) ;
    } else {
        printf( "Not Found.\n" ) ;
    }
}

void LinkedList::GoNext() {
    if ( *now != NULL ) {
        now = &( ( *now )->next ) ;
    }
}

void LinkedList::GoFirst() {
    now = &start ;
}

void LinkedList::GoLast() {
    GoFirst() ;
    while ( *now != NULL ) {
        GoNext() ;
    }
}

void LinkedList::ShowAll() {
    struct studentNode *temp = start ;
    printf( "\n--- Student List ---\n" ) ;
    while ( temp != NULL ) {
        printf( "Name: %s | Age: %d | Sex: %c | GPA: %.2f\n", temp->name, temp->age, temp->sex, temp->gpa ) ;
        temp = temp->next ;
    }
    printf( "--------------------\n" ) ;
}

int LinkedList::FindNode( char n[] ) {
    GoFirst() ;
    while ( *now != NULL ) {
        if ( strcmp( ( *now )->name, n ) == 0 ) {
            return 1 ; 
        }
        GoNext() ;
    }
    return 0 ; 
}

struct studentNode *LinkedList::NowNode() {
    return *now ;
}

void LinkedList::EditNode( char n[], int a, char s, float g ) {
    if ( *now != NULL ) {
        strcpy( ( *now )->name, n ) ;
        ( *now )->age = a ;
        ( *now )->sex = s ;
        ( *now )->gpa = g ;
    }
}

void AddData( LinkedList *ll ) {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
    
    printf( "Enter Name Age Sex GPA : " ) ;
    scanf( "%s %d %c %f", name, &age, &sex, &gpa ) ;
    ll->InsNode( name, age, sex, gpa ) ;
    printf( "Added Successfully.\n" ) ;
}

void EditData( LinkedList *ll ) {
    char targetName[ 20 ] ;
    printf( "Enter Name to Edit : " ) ;
    scanf( "%s", targetName ) ;
    
    if ( ll->FindNode( targetName ) == 1 ) {
        char name[ 20 ] ;
        int age ;
        char sex ;
        float gpa ;
        
        printf( "Enter New Name Age Sex GPA : " ) ;
        scanf( "%s %d %c %f", name, &age, &sex, &gpa ) ;
        ll->EditNode( name, age, sex, gpa ) ;
        printf( "Edited Successfully.\n" ) ;
    } else {
        printf( "Not Found.\n" ) ;
    }
}

void FindData( LinkedList *ll ) {
    char targetName[ 20 ] ;
    printf( "Enter Name to Find : " ) ;
    scanf( "%s", targetName ) ;
    
    if ( ll->FindNode( targetName ) == 1 ) {
        struct studentNode *node = ll->NowNode() ;
        printf( "Found : Name: %s | Age: %d | Sex: %c | GPA: %.2f\n", node->name, node->age, node->sex, node->gpa ) ;
    } else {
        printf( "Not Found.\n" ) ;
    }
}

void readfile( LinkedList *ll ) {
    FILE *fp = fopen( "students.txt", "r" ) ;
    if ( fp != NULL ) {
        char name[ 20 ] ;
        int age ;
        char sex ;
        float gpa ;

        while ( fscanf( fp, "%s %d %c %f", name, &age, &sex, &gpa ) == 4 ) {
            ll->InsNode( name, age, sex, gpa ) ;
        }
        fclose( fp ) ;
    }
}

void writefile( LinkedList *ll ) {
    FILE *fp = fopen( "students.txt", "w" ) ;
    if ( fp != NULL ) {
        ll->GoFirst() ;
        while ( ll->NowNode() != NULL ) {
            struct studentNode *node = ll->NowNode() ;
            fprintf( fp, "%s %d %c %.2f\n", node->name, node->age, node->sex, node->gpa ) ;
            ll->GoNext() ;
        }
        fclose( fp ) ;
    }
}
