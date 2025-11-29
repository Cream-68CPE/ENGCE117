#include <stdio.h>

int main()
{
    int grossSalary ;
    float taxRate ;
    float taxAmount ;
    float netSalary ;

    printf( "Enter Gross Salary : " ) ;
    scanf( "%d", &grossSalary ) ;

    if ( grossSalary < 20000 ) {
        taxRate = 0.0 ;
    } else if ( grossSalary < 50000 ) {
        taxRate = 0.05 ;
    } else {
        taxRate = 0.10 ;
    }

    taxAmount = grossSalary * taxRate ;
    netSalary = grossSalary - taxAmount ;

    printf( "\n--- Salary Report ---\n" ) ;

    printf( "Gross Salary : %d THB\n", grossSalary ) ;
    printf( "Tax Rate : %.0f%%\n", taxRate * 100 ) ;
    printf( "Tax Amount : %.2f THB\n", taxAmount ) ;
    printf( "Net Salary : %.2f THB\n", netSalary ) ;

    return 0 ;
}
