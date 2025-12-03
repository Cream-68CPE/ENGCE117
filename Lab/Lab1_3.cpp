#include <stdio.h>

int *GetSet( int * ) ;

int main() {
    
    int *data ;
    int num ;
    
    data = GetSet( &num ) ;
    
    return 0 ;
    
}

int *GetSet( int *num ) {
    
    /* ใช้ static array เพื่อเก็บข้อมูลถาวร ไม่ให้หายเมื่อจบฟังก์ชัน */
    static int buffer[ 100 ] ;
    
    scanf( "%d" , num ) ;
    
    int i = 0 ;
    for ( i = 0 ; i < *num ; i++ ) {
        
        scanf( "%d" , &buffer[ i ] ) ;
        
    }
    
    /* ส่งคืน address ของ buffer กลับไปให้ main */
    return buffer ;
    
}
