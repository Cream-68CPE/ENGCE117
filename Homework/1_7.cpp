
#include <stdio.h>

int main() {
    
    int   customerType ;
    float consumptionKwh ;  
    float totalBill = 0.0 ;

    
    if ( scanf( "%d %f", &customerType, &consumptionKwh ) != 2 ) {
        return 1 ;
    }
    
    if ( customerType == 1 ) {
        
        if ( consumptionKwh <= 100 ) {
            totalBill = consumptionKwh * 3.00 ;
        } else {
            totalBill = consumptionKwh * 4.00 ;
        }
        
    } else if ( customerType == 2 ) { 
        
        if ( consumptionKwh <= 500 ) {
            totalBill = consumptionKwh * 5.00 ;
        } else {
            totalBill = consumptionKwh * 6.50 ; 
        }
        
    } else if ( customerType == 3 ) {
        
        totalBill = 0.0 ;
        printf( "Invalid Customer Type" ) ; 
       
    } else {
        
        printf( "Invalid Customer Type" ) ;
        
    }

    if ( totalBill > 0.0 || customerType < 3 ) {
        printf( "%.2f\n", totalBill ) ;
    }

    return 0 ;
}
