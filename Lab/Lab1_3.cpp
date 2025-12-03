#include <stdio.h>

/* ประกาศ Array ไว้ข้างนอก (Global) เพื่อให้มีที่อยู่แน่นอน
   และข้อมูลไม่หายเมื่อจบฟังก์ชัน (แก้เรื่อง Stability)
*/
int storage[ 200 ] ; 

int *GetSet( int * ) ;

int main() {
    
    int *data ;
    int num ;
    
    data = GetSet( &num ) ;
    
    return 0 ;
}

int *GetSet( int *count ) {
    
    /* รับจำนวนสมาชิกมาใส่ในตัวแปรที่ main ส่งมา */
    scanf( "%d" , count ) ;
    
    int k = 0 ;
    /* วนลูปรับค่า โดยใช้ *count เพื่อดึงค่าจำนวนเต็มออกมา */
    for ( k = 0 ; k < *count ; k++ ) {
        
        /* เก็บข้อมูลลงใน Global Array ที่เตรียมไว้ */
        scanf( "%d" , &storage[ k ] ) ;
        
    }
    
    /* ส่ง address ของ storage กลับไป */
    return storage ;
}
