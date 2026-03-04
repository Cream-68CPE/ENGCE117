#include <stdio.h>
#include <stdlib.h>

#define TOTAL_ELEMENTS 5
#define MAX_BAG_CAPACITY 11

int GetMaximum( int val1, int val2 ) {
    
    if ( val1 > val2 ) {
        return val1 ;
    }
    
    return val2 ;
}

int *KnapsackDP( int *w, int *v, int n, int wx ) {
    
    int item_idx ;
    int weight_limit ;
    
    int **dp_table = (int **)malloc( ( n + 1 ) * sizeof( int * ) ) ;
    
    if ( dp_table == NULL ) {
        return NULL ;
    }
    
    for ( item_idx = 0 ; item_idx <= n ; item_idx++ ) {
        
        dp_table[ item_idx ] = (int *)malloc( ( wx + 1 ) * sizeof( int ) ) ;
        
        if ( dp_table[ item_idx ] == NULL ) {
            return NULL ;
        }
        
    }
    
    for ( item_idx = 0 ; item_idx <= n ; item_idx++ ) {
        
        for ( weight_limit = 0 ; weight_limit <= wx ; weight_limit++ ) {
            
            if ( item_idx == 0 || weight_limit == 0 ) {
                
                dp_table[ item_idx ][ weight_limit ] = 0 ;
                
            } else if ( w[ item_idx - 1 ] <= weight_limit ) {
                
                int include_val = v[ item_idx - 1 ] + dp_table[ item_idx - 1 ][ weight_limit - w[ item_idx - 1 ] ] ;
                int exclude_val = dp_table[ item_idx - 1 ][ weight_limit ] ;
                
                dp_table[ item_idx ][ weight_limit ] = GetMaximum( include_val, exclude_val ) ;
                
            } else {
                
                dp_table[ item_idx ][ weight_limit ] = dp_table[ item_idx - 1 ][ weight_limit ] ;
                
            }
            
        }
        
    }
    
    int *selected_items = (int *)malloc( n * sizeof( int ) ) ;
    
    if ( selected_items == NULL ) {
        return NULL ;
    }
    
    for ( item_idx = 0 ; item_idx < n ; item_idx++ ) {
        selected_items[ item_idx ] = 0 ;
    }
    
    int current_profit = dp_table[ n ][ wx ] ;
    int current_capacity = wx ;
    
    for ( item_idx = n ; item_idx > 0 && current_profit > 0 ; item_idx-- ) {
        
        if ( current_profit != dp_table[ item_idx - 1 ][ current_capacity ] ) {
            
            selected_items[ item_idx - 1 ] = 1 ;
            current_profit = current_profit - v[ item_idx - 1 ] ;
            current_capacity = current_capacity - w[ item_idx - 1 ] ;
            
        }
        
    }
    
    for ( item_idx = 0 ; item_idx <= n ; item_idx++ ) {
        free( dp_table[ item_idx ] ) ;
    }
    free( dp_table ) ;
    
    return selected_items ;
}

int main() {
    
    int num_items = TOTAL_ELEMENTS ;
    int max_capacity = MAX_BAG_CAPACITY ;
    
    int weight_arr[ TOTAL_ELEMENTS ] = { 1, 2, 5, 6, 7 } ;
    int value_arr[ TOTAL_ELEMENTS ] = { 1, 6, 18, 22, 28 } ;
    int *result_arr ;
    
    result_arr = KnapsackDP( weight_arr, value_arr, num_items, max_capacity ) ;
    
    if ( result_arr != NULL ) {
        
        for ( int print_idx = 0 ; print_idx < num_items ; print_idx++ ) {
            
            printf( "%d ", result_arr[ print_idx ] ) ;
            
        }
        
        free( result_arr ) ;
        
    }
    
    return 0 ;
}
