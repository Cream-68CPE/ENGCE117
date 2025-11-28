#include <stdio.h>

struct Campaign
{
    char name[50] ;
    float productPrice ;
    int salesCount ;
    float adSpend ;
} ;

int main()
{
    int N ;
    float commissionRate ;
    float totalRevenue ;
    float totalCommission ;
    float netProfit ;

    printf( "Enter number of campaigns: " ) ;
    scanf( "%d", &N ) ;

    struct Campaign campaigns[N] ;

    for ( int i = 0 ; i < N ; i++ )
    {
        printf( "\n--- Campaign %d ---\n", i + 1 ) ;

        while ( getchar() != '\n' ) ;

        printf( "Campaign Name: " ) ;
        scanf( "%[^\n]", campaigns[i].name ) ;

        printf( "Product Price: " ) ;
        scanf( "%f", &campaigns[i].productPrice ) ;

        printf( "Sales Count: " ) ;
        scanf( "%d", &campaigns[i].salesCount ) ;

        printf( "Ad Spend: " ) ;
        scanf( "%f", &campaigns[i].adSpend ) ;

        if ( campaigns[i].salesCount >= 20 )
        {
            commissionRate = 0.20 ;
        }
        else if ( campaigns[i].salesCount >= 10 )
        {
            commissionRate = 0.15 ;
        }
        else
        {
            commissionRate = 0.10 ;
        }

        totalRevenue = campaigns[i].salesCount * campaigns[i].productPrice ;
        totalCommission = totalRevenue * commissionRate ;
        netProfit = totalCommission - campaigns[i].adSpend ;

        printf( "Result:\n" ) ;
        printf( " > Rate: %.0f%%\n", commissionRate * 100 ) ;
        printf( " > Revenue: %.2f\n", totalRevenue ) ;
        printf( " > Commission: %.2f\n", totalCommission ) ;
        printf( " > Net Profit: %.2f\n", netProfit ) ;
    }

    return 0 ;
}
