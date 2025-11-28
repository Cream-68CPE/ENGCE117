#include <stdio.h>

struct Item {
    char name[50] ;
    float unitPrice ;
    int quantity ;
} ;

int main()
{
    const float VAT_RATE = 0.07 ;

    int N ;
    int i ;
    float subTotal = 0.0 ;
    
    struct Item currentItem ;

    printf( "Enter number of items (N) : " ) ;
    if ( scanf( "%d", &N ) != 1 ) {
        return 1; 
    }

    printf( "\n--- Enter Product Details ---\n" ) ;

    for ( i = 0 ; i < N ; i++ ) {
        
        printf( "\nItem #%d\n", i + 1 ) ;
        
        printf( "Name : " ) ;
        scanf( "%s", currentItem.name ) ;
        
        printf( "Unit Price : " ) ;
        scanf( "%f", &currentItem.unitPrice ) ;
        
        printf( "Quantity : " ) ;
        scanf( "%d", &currentItem.quantity ) ;

        float itemCost = currentItem.unitPrice * currentItem.quantity ;
        
        printf( "Result: %s x %d = %.2f THB\n", currentItem.name, currentItem.quantity, itemCost ) ;

        subTotal += itemCost ;
    }

    float totalVAT = subTotal * VAT_RATE ;
    float grandTotal = subTotal + totalVAT ;

    printf( "\n---------------------------------\n" ) ;
    printf( "Summary\n" ) ;
    printf( "---------------------------------\n" ) ;
    printf( "Subtotal    : %.2f THB\n", subTotal ) ;
    printf( "VAT (7%%)    : %.2f THB\n", totalVAT ) ;
    printf( "Grand Total : %.2f THB\n", grandTotal ) ;
    printf( "---------------------------------\n" ) ;

    return 0 ;
}
