#include <studio.h>
int main(){
    int toan, ly, hoa;
    printf("Nhap diem Toan: ");
    scanf("%d", &toan);
    printf("Nhap diem Ly: ");
    scanf("%d", &ly);
    printf("Nhap diem Hoa: ");
    scanf("%d", &hoa);
    float diemTrungBinh = (float) (toan + ly + hoa) / 3;
    printf("Diem trung binh la: %.2f\n", diemTrungBinh);
     float diemTrungBinh;
                printf("\n");
                if(diem < 0 || diem > 10) {
                    printf("Diem khong hop le \n");
                } 
                else {
                    if(diem >= 9.0) {
                        printf("Hoc luc: Xuat sac \n");
                    } else if(diem >= 8.0) {
                        printf("Hoc luc: Gioi \n");
                    } else if(diem >= 6.5) {
                        printf("Hoc luc: Kha \n");
                    } else if(diem >= 5.0) {
                        printf("Hoc luc: Trung binh \n");
                    } else if(diem >= 3.5){
                        printf("Hoc luc: Yeu \n");
                    } else {
                        printf("Hoc luc: Kem \n");
                    }
                }
                printf("\n");
    return 0;
}