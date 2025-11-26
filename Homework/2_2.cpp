#include <stdio.h>

int main()
{
    int N, i, quantity ;
    float unitPrice, itemCost, grandTotal = 0.0 ;

    if ( scanf( "%d", &N ) != 1 ) {
        return 1 ;
    }

    for ( i = 0 ; i < N ; i++ ) {

        scanf( "%f %d", &unitPrice, &quantity ) ;

        if ( unitPrice >= 1000.00 ) {
            
            itemCost = ( unitPrice * quantity ) * 0.90 ;

        } else {

            itemCost = unitPrice * quantity ;

        }

        grandTotal += itemCost ;

    }
   
    printf( "Grand Total: %.2f\n", grandTotal ) ;
    return 0 ;
}
