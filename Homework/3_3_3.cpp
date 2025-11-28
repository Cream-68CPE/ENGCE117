#include <stdio.h>
struct Student
{
    char name[50] ;
    int studentId ;
    float score ;
} ;
void getStudentInput( struct Student students[], int index ) ;

int main()
{
    int N ;
    float totalScore = 0.0 ; 
    float averageScore = 0.0 ;

 
    printf( "Enter number of students: " ) ;
    scanf( "%d", &N ) ;

    struct Student students[N] ;

    for ( int i = 0 ; i < N ; i++ )
    {
        printf( "\nData for student %d\n", i + 1 ) ;
        getStudentInput( students, i ) ;
        totalScore += students[i].score ;
    }
    if ( N > 0 )
    {
        averageScore = totalScore / N ;
    }
    printf( "\n-----------------------------\n" ) ;
    printf( "Total Score: %.2f\n", totalScore ) ;
    printf( "Average Score: %.2f\n", averageScore ) ;

    return 0 ;
}
void getStudentInput( struct Student students[], int index )
{
    printf( "Enter ID: " ) ;
    scanf( "%d", &students[index].studentId ) ;

    printf( "Enter Score: " ) ;
    scanf( "%f", &students[index].score ) ;

    while ( getchar() != '\n' ) ;

    printf( "Enter Name: " ) ;
    scanf( "%[^\n]", students[index].name ) ;
}
