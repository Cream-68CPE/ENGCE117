#include <stdio.h>

int main()
{
    int categoryCode ;
    float price_before_vat ;
    float totalBill = 0.0 ;
    float vatAmount = 0.0 ;

    if ( scanf( "%f %d", &price_before_vat, &categoryCode ) != 2 ) {
        return 1 ;
    }
    
    switch ( categoryCode ) {
        
        case 1 :
            totalBill = price_before_vat * 1.07 ;
            
            vatAmount = totalBill - price_before_vat ;
            printf( "VAT Amount: %.2f\n", vatAmount ) ;
            printf( "Total Price: %.2f\n", totalBill ) ;
            break ;
            
        case 2 :
            totalBill = price_before_vat ;
            
            vatAmount = totalBill - price_before_vat ;
            printf( "VAT Amount: %.2f\n", vatAmount ) ;
            printf( "Total Price: %.2f\n", totalBill ) ;
            break ;
            
        case 3 :
            totalBill = price_before_vat * 1.15 ;
            
            vatAmount = totalBill - price_before_vat ;
            printf( "VAT Amount: %.2f\n", vatAmount ) ;
            printf( "Total Price: %.2f\n", totalBill ) ;
            break ;
            
        default :
            printf( "Invalid Category\n" ) ;
            totalBill = 0.0 ;
            break ;
            
    }

    return 0 ;
}
