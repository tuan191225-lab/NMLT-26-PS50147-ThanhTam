#include <stdio.h>
#include <string.h>

struct SinhVien {
    char mssv[50];
    char tenSV[50];
    char nganhHoc[50];
    float diemTB;
};

void nhapXuatSV(struct SinhVien mangSV[], int *n) {
    for (int i = 0; i < *n; i++) {
        printf("Nhap thong tin sinh vien thu %d: \n", i+1);
        printf("Nhap ma so sinh vien (MSSV): ");
        fgets(mangSV[i].mssv, sizeof(mangSV[i].mssv), stdin);
        mangSV[i].mssv[strcspn(mangSV[i].mssv, "\n")] = '\0';

        printf("Nhap ho va ten : ");
        fgets(mangSV[i].tenSV, sizeof(mangSV[i].tenSV), stdin);
        mangSV[i].tenSV[strcspn(mangSV[i].tenSV, "\n")] = '\0';

        printf("Nhap nganh hoc: ");
        fgets(mangSV[i].nganhHoc, sizeof(mangSV[i].nganhHoc), stdin);
        mangSV[i].nganhHoc[strcspn(mangSV[i].nganhHoc, "\n")] = '\0';
        
        printf("Nhap diem TB: ");
        scanf("%f", &mangSV[i].diemTB);
        getchar();
    }

    printf("Danh sach sinh vien: \n");
    for (int i = 0; i < *n; i++) {
        printf("Sinh vien thu %d: MSSV: %s | Ho ten: %s | Nganh hoc: %s | Diem TB: %.2f \n", i+1, mangSV[i].mssv, mangSV[i].tenSV, mangSV[i].nganhHoc, mangSV[i].diemTB);
    }
}

void sapXepSinhVien(struct SinhVien mangSV[], int *n) {
    for (int i = 0; i < *n; i++) {
        for (int j = 0; j < *n-i-1; j++) {
            if (mangSV[j].diemTB > mangSV[j+1].diemTB) {
                struct SinhVien temp = mangSV[j];
                mangSV[j] = mangSV[j+1];
                mangSV[j+1] = temp;
            }
        }
    }
    printf("Danh sach sinh vien sau khi sap xep tang dan: \n");
    for (int i = 0; i < *n; i++) {
        printf("Sinh vien thu %d: MSSV: %s | Ho ten: %s | Nganh hoc: %s | Diem TB: %.2f \n", i+1, mangSV[i].mssv, mangSV[i].tenSV, mangSV[i].nganhHoc, mangSV[i].diemTB);
    }
}

void timKiemSinhVien(struct SinhVien mangSV[], int *n) {
    char mssvTim[50];
    int found;
    printf("Nhap ma so sinh vien can tim: ");
    fgets(mssvTim, sizeof(mssvTim), stdin);
    mssvTim[strcspn(mssvTim, "\n")] = '\0';
    for (int i = 0; i < *n; i++) {
        if (strcmp(mangSV[i].mssv, mssvTim) == 0) {
            printf("Tim thay sinh vien: MSSV: %s | Ho ten: %s | Nganh hoc: %s | Diem TB: %.2f \n", mangSV[i].mssv, mangSV[i].tenSV, mangSV[i].nganhHoc, mangSV[i].diemTB);
            found = 1;
            break;
        }
        else {
            found = 0;
        }
    }
    if (found == 0) 
        printf("Khong tim thay sinh vien co MSSV nay! \n");
}

void xuatHocBong(struct SinhVien mangSV[], int *n) {
    int count = 0;
    printf("Danh sach sinh vien nhan hoc bong: \n");
    for (int i = 0; i < *n; i++) {
        if (mangSV[i].diemTB >= 8.0) {
            printf("MSSV: %s | Ho ten: %s | Nganh hoc: %s | Diem TB: %.2f \n", mangSV[i].mssv, mangSV[i].tenSV, mangSV[i].nganhHoc, mangSV[i].diemTB);
            count++;
        }
    }
    if (count == 0) {
        printf("Khong co sinh vien nao dat hoc bong. \n");
    }
}

int main() {
    int choice;
    do {
        printf("\n");
        printf("+------------------------------------------+\n");
        printf("|    HE THONG QUAN LY SINH VIEN (LAB 8)    |\n");
        printf("+------------------------------------------+\n");
        printf("1. Nhap va xuat danh sach sinh vien \n");
        printf("2. Sap xep sinh vien theo diem TB tang dan \n");
        printf("3. Tim kiem sinh vien theo Ma so sinh vien(MSSV) \n");
        printf("4. Xuat danh sach sinh vien dat hoc bong (>= 8.0) \n");
        printf("5. Thoat chuong trinh \n");
        printf("+-------------------------------+\n");
        printf("Xin moi chon chuc nang(1-5): ");
        scanf("%d", &choice);
        getchar();
        printf("\n");

        int n;
        struct SinhVien mangSV[100];
        switch(choice) {
            case 1:
                printf("Nhap vao so luong sinh vien: ");
                scanf("%d", &n);
                getchar();
                nhapXuatSV(mangSV, &n);
                break;
            case 2:
                sapXepSinhVien(mangSV, &n);
                break;
            case 3:
                timKiemSinhVien(mangSV, &n);
                break;
            case 4:
                xuatHocBong(mangSV, &n);
                break;
            case 5:
                printf("Dang thoat chuong trinh! \n");
                break;
            default:
                printf("Khong co chuc nang nay. Xin moi chon lai! \n");
                break;                
        }
    }while(choice != 5);

    return 0;
}