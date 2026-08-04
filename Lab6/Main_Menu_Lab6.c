#include <stdio.h>

void nhapPhanTu(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap vao phan tu thu %d: ", i+1);
        scanf("%d", &a[i]);
    }
}

void tinhTrungBinhCong(int a[], int n) {
    float trungBinh = 0;
    int count = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0 && a[i] % 5 == 0) {
            sum += a[i];
            count++;
        }
    }
    if (count == 0) {
        printf("Khong co so nao chia het cho 3 va 5! \n");
        return;
    }
    trungBinh = (float) sum / count;
    printf("Trung binh tong cua cac so chia het cho 3 va 5 la: %.2f", trungBinh);
}

void timMaxMin(int a[], int n) {
    int max = a[0];
    int min = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }
    printf("Max cua mang a la: %d, min cua mang a la: %d", max, min);
}

void sapXepGiamDan(int a[], int n) {
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if (a[j] < a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void nhapPhanTuMang2Chieu(int row, int col, int a[row][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Nhap vao phan tu thu a[%d][%d]: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
}

void maTranBinhPhuong(int row, int col, int a[row][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%3d \t", a[i][j] * a[i][j]);
        }
        printf("\n");
    }
}

 void xuatSoLeMaTran(int row, int col, int a[row][col]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (a[i][j] % 2 != 0) {
                printf("Phan tu so le tai a[%d][%d]: %d \n", i+1, j+1, a[i][j]);
            }
        }
    }
 }

int main() {
    int choice;
    do {
        printf("\n");
        printf("+-------------------------------+\n");
        printf("|    MENU CHUONG TRINH LAB 6    |\n");
        printf("+-------------------------------+\n");
        printf("1. Tinh trung binh tong so chia het cho 3 va 5 \n");
        printf("2. Tim gia tri Lon nhat va Nho nhat trong Mang \n");
        printf("3. Sap xep Mang theo thu tu Giam dan \n");
        printf("4. Ma tran binh phuong (Mang 2 chieu) \n");
        printf("5. Loc va xuat vi tri cac so le trong ma tran \n");
        printf("6. Thoat chuong trinh \n");
        printf("+-------------------------------+\n");
        printf("Xin moi chon chuc nang(1-6): ");
        scanf("%d", &choice);
        printf("\n");
        
        switch(choice) {
            case 1: {
                int n;
                printf("Nhap vao so luong phan tu cua mang a: ");
                scanf("%d", &n);
                int a[n];
                nhapPhanTu(a, n);
                tinhTrungBinhCong(a, n);
                break;
            }
            case 2: {
                int n;
                printf("Nhap vao so luong phan tu cua mang a: ");
                scanf("%d", &n);
                int a[n];
                nhapPhanTu(a, n);
                timMaxMin(a, n);
                break;
            }
            case 3: {
                int n;
                printf("Nhap vao so luong phan tu cua mang a: ");
                scanf("%d", &n);
                int a[n];
                nhapPhanTu(a, n);
                printf("Mang truoc khi sap xep: \n");
                for (int i = 0; i < n; i++) {
                    printf("a[%d] = %d \n", i, a[i]);
                }
                sapXepGiamDan(a, n);
                printf("Mang sau khi sap xep: \n");
                for (int i = 0; i < n; i++) {
                    printf("a[%d] = %d \n", i, a[i]);
                }
                break;
            }
            case 4: {
                int row, col;
                printf("Nhap vao so hang cua mang 2 chieu a: ");
                scanf("%d", &row);
                printf("Nhap vao so cot cua mang 2 chieu a: ");
                scanf("%d", &col);
                int a[row][col];
                nhapPhanTuMang2Chieu(row, col, a);
                maTranBinhPhuong(row, col, a);
                break;
            }
            case 5: {
                int row, col;
                printf("Nhap vao so hang cua mang 2 chieu a: ");
                scanf("%d", &row);
                printf("Nhap vao so cot cua mang 2 chieu a: ");
                scanf("%d", &col);
                int a[row][col];
                nhapPhanTuMang2Chieu(row, col, a);
                xuatSoLeMaTran(row, col, a);
                break;
            }
            case 6: {
                printf("Dang thoat chuong trinh! \n");
                break;
            }
            default: {
                printf("Khong co chuc nang nay, moi chon lai! \n");
                break;
            }
        }
    }while(choice != 6);
}