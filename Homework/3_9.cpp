#include <stdio.h>

int main()
{
    float currentBudget ;
    int N_DAYS ;
    float dailySpend ;

    printf( "Enter initial budget: " ) ;
    scanf( "%f", &currentBudget ) ;

    printf( "Enter N_DAYS: " ) ;
    scanf( "%d", &N_DAYS ) ;

    printf( "\n--- Daily Report ---\n" ) ;
    printf( "Day\tSpent\tRemaining\n" ) ;

    for ( int day = 1 ; day <= N_DAYS ; day++ )
    {
        if ( currentBudget >= 500.00 )
        {
            dailySpend = 100.00 ;
        }
        else if ( currentBudget >= 100.00 )
        {
            dailySpend = 50.00 ;
        }
        else
        {
            dailySpend = 20.00 ;
        }

        if ( dailySpend > currentBudget )
        {
            dailySpend = currentBudget ;
        }

        currentBudget = currentBudget - dailySpend ;

        printf( "%d\t%.2f\t%.2f\n", day, dailySpend, currentBudget ) ;
    }

    printf( "\n--- Summary ---\n" ) ;
    printf( "Final Budget: %.2f\n", currentBudget ) ;

    return 0 ;
}
