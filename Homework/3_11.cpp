#include <stdio.h>

int main()
{
    int choice ;
    float totalCost = 0.0 ;
    float paidAmount ;
    float change ;

    do {
        printf( "--- Vending Machine ---\n" ) ;
        printf( "1. Coke (15.00)\n" ) ;
        printf( "2. Water (10.00)\n" ) ;
        printf( "3. Snack (25.00)\n" ) ;
        printf( "4. Exit and Pay\n" ) ;
        printf( "Current Total: %.2f\n", totalCost ) ;

        printf( "Select item (1-4): " ) ;
        scanf( "%d", &choice ) ;

        switch ( choice ) {
            case 1 :
                totalCost += 15.00 ;
                printf( "Item added. Current Total: %.2f\n", totalCost ) ;
                break ;
            case 2 :
                totalCost += 10.00 ;
                printf( "Item added. Current Total: %.2f\n", totalCost ) ;
                break ;
            case 3 :
                totalCost += 25.00 ;
                printf( "Item added. Current Total: %.2f\n", totalCost ) ;
                break ;
            case 4 :
                break ;
        }
        
    } while ( choice != 4 ) ;

    printf( "Total due: %.2f\n", totalCost ) ;
    printf( "Enter paid amount: " ) ;
    scanf( "%f", &paidAmount ) ;

    if ( paidAmount >= totalCost ) {
        change = paidAmount - totalCost ;
        printf( "Purchase successful. Change: %.2f\n", change ) ;
    } else {
        printf( "Insufficient payment.\n" ) ;
    }

    return 0 ;
}
