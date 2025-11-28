#include <stdio.h>

struct Student
{
    char name[50] ;
    int studentId ;
    float score ;
} ;

int main()
{
    int N ;

    printf( "Enter number of students: " ) ;
    scanf( "%d", &N ) ;

    struct Student students[N] ;

    for ( int i = 0 ; i < N ; i++ )
    {
        printf( "\nData for student %d\n", i + 1 ) ;

        printf( "Enter ID: " ) ;
        scanf( "%d", &students[i].studentId ) ;

        printf( "Enter Score: " ) ;
        scanf( "%f", &students[i].score ) ;

        while ( getchar() != '\n' ) ;

        printf( "Enter Name: " ) ;
        scanf( "%[^\n]", students[i].name ) ;
    }

    printf( "\n--- All Student Data ---\n" ) ;

    for ( int i = 0 ; i < N ; i++ )
    {
        printf( "ID: %d | Name: %s | Score: %.2f\n", students[i].studentId, students[i].name, students[i].score ) ;
    }

    return 0 ;
}
