// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main() {
    int num1, num2, operationCode, result ;
    
    // รับค่าตัวเลข 2 ตัวและรหัสคำสั่ง
    printf( "Enter two integers (num1, num2) and the operation code (1-4):\n" ) ;
    if (scanf( "%d %d %d", &num1, &num2, &operationCode ) != 3) {
        printf( "Input error.\n" ) ;
        return 1 ; // Handle input failure
    }
    
    // TODO: Implement the switch statement logic here, including break and default

    switch (operationCode) {
        case 1: // บวก 
            result = num1 + num2 ;
            printf( "Result: %d + %d = %d\n", num1, num2, result ) ;
            break ;
            
        case 2: // ลบ 
            result = num1 - num2;
            printf( "Result: %d - %d = %d\n", num1, num2, result ) ;
            break ;
            
        case 3: // คูณ 
            result = num1 * num2 ;
            printf( "Result: %d * %d = %d\n", num1, num2, result ) ;
            break ;
            
        case 4: // หาร 
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n") ;
                return 1 ; 
            }
            result = num1 / num2;
            printf("Result: %d / %d = %d\n", num1, num2, result) ;
            break ;
            
        default: // รหัสคำสั่งไม่ถูกต้อง 
            printf( "Invalid Operation\n" ) ;
            break ;
    }

    return 0 ;
}
