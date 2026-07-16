#include <stdio.h>

int main() {
    int namSinh;
    float diemTB;
    char hoten[50], mssv[50];

    printf("Nhap vao ma so sinh vien: ");
    scanf("%s", mssv);

    printf("Nhap vao ho ten sinh vien: ");
    scanf(" %[^\n]", hoten);

    printf("Nhap vao nam sinh: ");
    scanf("%d", &namSinh);
    

    printf("Nhap vao diem trung binh: ");
    scanf("%f", &diemTB);

    printf("\nThong tin sinh vien:\n");
    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ten sinh vien: %s\n", hoten);
    printf("Nam sinh: %d\n", namSinh);
    printf("Tuoi: %d\n", 2026 - namSinh);
    printf("Diem trung binh: %.1f\n", diemTB);

    return 0;
}