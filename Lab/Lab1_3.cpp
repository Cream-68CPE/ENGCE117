#include <stdio.h>

void GetSet( int [] , int * ) ;

int main() {
    
    int *data ; 
    int num ;
    
    GetSet( (int *)&data , &num ) ;
    
    /* ใส่ return 0 เพื่อยืนยันการจบโปรแกรม */
    return 0 ;
}

void GetSet( int set[] , int *num ) {
    
    /* ใช้ static เพื่อรักษาข้อมูลไว้หลังจบฟังก์ชัน (แทน malloc) */
    static int buffer[ 100 ] ;
    
    /* แปลงเป็น int** เพื่อให้เปลี่ยนที่อยู่ของ pointer ใน main ได้ */
    int **ptrToData = ( int ** ) set ;
    
    /* ให้ pointer ใน main ชี้มาที่ buffer นี้ */
    *ptrToData = buffer ;
    
    scanf( "%d" , num ) ;
    
    int i = 0 ;
    for ( i = 0 ; i < *num ; i++ ) {
        scanf( "%d" , &buffer[ i ] ) ;
    }
    
}
