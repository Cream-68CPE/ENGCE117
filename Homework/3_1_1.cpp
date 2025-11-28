#include <stdio.h>

struct Product
{
    char name[50] ;
    int productId ;
    float price ;
};

int main()
{
    struct Product item ;

    printf( "Enter Product ID: " ) ;
    scanf( "%d", &item.productId ) ;

    printf( "Enter Price: " ) ;
    scanf( "%f", &item.price ) ;

    while ( getchar() != '\n' ) ;

    printf( "Enter Product Name: " ) ;
    scanf( "%[^\n]", item.name ) ;

    printf( "\n--- Product Details ---\n" ) ;
    printf( "Product ID: %d\n", item.productId ) ;
    printf( "Name: %s\n", item.name ) ;
    printf( "Price: %.2f\n", item.price ) ;

    return 0 ;
}
