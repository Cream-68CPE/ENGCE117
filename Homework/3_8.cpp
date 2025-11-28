#include <stdio.h>

struct Campaign
{
    char name[50] ;
    float productPrice ;
    int salesCount ;
    float adSpend ;
} ;

void getCampaignData( struct Campaign campaigns[], int index ) ;
void processAndShowData( struct Campaign campaigns[], int n ) ;

int main()
{
    int N ;

    printf( "Enter number of campaigns: " ) ;
    scanf( "%d", &N ) ;

    struct Campaign campaigns[N] ;

    for ( int i = 0 ; i < N ; i++ )
    {
        printf( "\n--- Campaign %d ---\n", i + 1 ) ;
        getCampaignData( campaigns, i ) ;
    }

    printf( "\n================ REPORT ================\n" ) ;
    processAndShowData( campaigns, N ) ;

    return 0 ;
}

void getCampaignData( struct Campaign campaigns[], int index )
{
    while ( getchar() != '\n' ) ;

    printf( "Enter Campaign Name: " ) ;
    scanf( "%[^\n]", campaigns[index].name ) ;

    printf( "Enter Product Price: " ) ;
    scanf( "%f", &campaigns[index].productPrice ) ;

    printf( "Enter Sales Count: " ) ;
    scanf( "%d", &campaigns[index].salesCount ) ;

    printf( "Enter Ad Spend: " ) ;
    scanf( "%f", &campaigns[index].adSpend ) ;
}

void processAndShowData( struct Campaign campaigns[], int n )
{
    float commissionRate, totalRevenue, totalCommission, netProfit ;

    for ( int i = 0 ; i < n ; i++ )
    {
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

        printf( "Campaign: %s\n", campaigns[i].name ) ;
        printf( " > Sales: %d (Rate: %.0f%%)\n", campaigns[i].salesCount, commissionRate * 100 ) ;
        printf( " > Total Revenue: %.2f\n", totalRevenue ) ;
        printf( " > Total Commission: %.2f\n", totalCommission ) ;
        printf( " > Net Profit/Loss: %.2f\n", netProfit ) ;
        printf( "----------------------------------------\n" ) ;
    }
}
