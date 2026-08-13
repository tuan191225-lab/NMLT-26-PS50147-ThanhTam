#include <stdio.h>

int main(){
    char maSV1[8];
    char tenSV1[30];
    float diemSV1;

    char maSV2[8];
    char tenSV2[30];
    float diemSV2;

    char dsMaSV[40][8];
    char dsTenSV[40][30];
    float dsDiemSV[40];

    // struct
    struct Sinhvien
    {
        char maSV[8];
        char tenSV[30];
        float diemSV;
    } sv1, sv2;

    struct Sinhvien sv3;
    struct Sinhvien dsSinhVien[40];

    int n; // ✅ thêm
    printf("Nhap so sinh vien: ");
    scanf("%d", &n);
    getchar(); // ✅ rất quan trọng

    // Nhập
    for(int i = 0; i < n; i++) {
        printf("Nhap ma sinh vien[%d]: ", i);
        gets(dsSinhVien[i].maSV);

        printf("Nhap ten sinh vien[%d]: ", i);
        gets(dsSinhVien[i].tenSV);

        printf("Nhap diem sinh vien[%d]: ", i);
        scanf("%f", &dsSinhVien[i].diemSV);
        getchar(); // ✅ tránh lỗi gets
    }

    // Xuất
    printf("Xuat danh sach sinh vien:\n");
    printf("STT Ma sinh vien Ten sinh vien Diem sinh vien\n");

    for(int i = 0; i < n; i++) {
        printf("%5d\t%15s\t%25s%.2f\n",
            i+1,
            dsSinhVien[i].maSV,
            dsSinhVien[i].tenSV,
            dsSinhVien[i].diemSV);
    }

    return 0;
}