#include <stdio.h>
#define PI 3.14159

int main() {
    int chieuDai, chieuRong, banKinh;
    printf("Nhap vao chieu dai hinh chu nhat: ");
    scanf("%d", &chieuDai);
    printf("Nhap vao chieu rong hinh chu nhat: ");
    scanf("%d", &chieuRong);

    
    int chuViHCN = 2 * (chieuDai + chieuRong);
    printf("Chu vi hinh chu nhat: %d\n", chuViHCN);
    
    int dienTichHCN = chieuDai * chieuRong;
    printf("Dien tich hinh chu nhat: %d\n", dienTichHCN);
    
    printf("\n");
    
    printf("Nhap vao ban kinh hinh tron: ");
    scanf("%d", &banKinh);
    
    double chuViHT = 2 * PI * banKinh;
    printf("Chu vi hinh tron: %.2f\n", chuViHT);
    
    double dienTichHT = PI * banKinh * banKinh;
    printf("Dien tich hinh tron: %.2f\n", dienTichHT);
    
    return 0;
}
