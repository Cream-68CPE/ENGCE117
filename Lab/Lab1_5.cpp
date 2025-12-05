#include <stdio.h>

// สร้าง "กระดาน" เตรียมไว้รอข้างนอก (Global)
// สมมติว่าเมทริกซ์ไม่เกิน 100x100 = 10000 ช่อง
int matrixBuffer[10000]; 

void GetMatrix(int *value[], int *row, int *col) {
    int i, j;

    // รับค่าแถวและคอลัมน์
    scanf("%d %d", row, col);

    // วนลูปรับค่าสมาชิก
    for (i = 0; i < *row; i++) {
        for (j = 0; j < *col; j++) {
            // คำนวณตำแหน่ง index แบบ 1 มิติ: (แถว * จำนวนคอลัมน์รวม) + คอลัมน์ปัจจุบัน
            scanf("%d", &matrixBuffer[i * (*col) + j]);
        }
    }

    // สั่งให้ Pointer ใน main ชี้มาที่กระดานนี้
    *value = matrixBuffer;
}

int main() {
    int *data, m, n;
    
    // เรียกใช้ฟังก์ชัน
    GetMatrix(&data, &m, &n);

    // แสดงผล
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", data[i * n + j]);
        }
        printf("\n");
    }

    return 0;
}
