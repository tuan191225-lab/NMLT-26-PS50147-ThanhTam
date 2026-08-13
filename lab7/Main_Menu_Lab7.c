#include <stdio.h>
#include <string.h>

void demNguyenAmPhuAm(char str[]) {
    int demNA = 0;
    int demPA = 0;
    strlwr(str);
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'e' || str[i] == 'u' || str[i] == 'o' || str[i] == 'a' || str[i] == 'i')
            demNA++;
        else if (str[i] < 97)
            continue;
        else
            demPA++;
    }
    printf("Chuoi cua ban co %d chu cai la nguyen am va %d chu cai la phu am \n", demNA, demPA);
}

void kiemTraDangNhap(char user[], char pass[]) {
    char userSys[] = "admin";
    char passSys[] = "123456";
    if (strcmp(user, userSys) == 0 && strcmp(pass, passSys) == 0) 
        printf("Dang nhap thanh cong! \n");
    else 
        printf("Username hoac Password khong chinh xac! \n");
}

void sapXepChuoi(char s[][50]) {
    char temp[50];
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(s[i], s[j]) > 0) {
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }

    printf("\nDanh sach sau khi sap xep (Alphabet):\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, s[i]);
    }
}

void thapPhanSangNhiPhan(int n) {
    int i = 0;
    char nhiPhan[50];

    if (n == 0) {
        printf("So nhi phan: 0\n");
        return;
    }
    while (n > 0) {
        nhiPhan[i] = (n % 2) + '0';
        n = n / 2;
        i++;
    }
    nhiPhan[i] = '\0';
    printf("So nhi phan: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", nhiPhan[j]);
    }
    printf("\n");
}

int main() {
    int choice;
    do {
        printf("\n");
        printf("+-------------------------------+\n");
        printf("|    MENU CHUONG TRINH LAB 7    |\n");
        printf("+-------------------------------+\n");
        printf("1. Dem nguyen am va phu am trong chuoi \n");
        printf("2. Dang nhap he thong (User & Password) \n");
        printf("3. Sap xep danh sach chuoi theo thu tu Alphabet \n");
        printf("4. Chuyen doi so thap phan sang nhi phan(chuoi) \n");
        printf("5. Thoat chuong trinh \n");
        printf("+-------------------------------+\n");
        printf("Xin moi chon chuc nang(1-5): ");
        scanf("%d", &choice);
        getchar();
        printf("\n");

        switch(choice) {
            case 1:
                char str[50];
                printf("Nhap vao 1 chuoi: ");
                fgets(str, sizeof(str), stdin);
                demNguyenAmPhuAm(str);
                break;
            case 2:
                char user[50];
                char pass[50];

                printf("Nhap vao ten user: ");
                fgets(user, sizeof(user), stdin);
                printf("Nhap vao mat khau: ");
                fgets(pass, sizeof(pass), stdin);
                user[strcspn(user, "\n")] = '\0';
                pass[strcspn(pass, "\n")] = '\0';

                kiemTraDangNhap(user, pass);
                break;
            case 3:
                char s[5][50];
                for(int i = 0; i < 5; i++) {
                    printf("Nhap vao chuoi thu %d: ", i+1);
                    fgets(s[i], sizeof(s[i]), stdin);
                    s[i][strcspn(s[i], "\n")] = '\0';
                }
                sapXepChuoi(s);
                break;
            case 4:
                int n;
                printf("Nhap so nguyen duong: ");
                scanf("%d", &n);
                getchar();
                thapPhanSangNhiPhan(n);
        }
    }while(choice != 5);

    return 0;
}