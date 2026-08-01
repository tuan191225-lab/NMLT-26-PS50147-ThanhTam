#include <stdio.h>
#include <math.h>

int findMax(int a, int b, int c) {
    if (a > b && a > c)
        return a;
    else if (b > a && b > c) 
        return b;
    else if (c > a && c > b)
        return c;
}

int checkYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    }
    else
        return 0;
 }

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

#include <math.h>

const char* checkTriangle(float a, float b, float c) {
    if(a+b>c && a+c>b && b+c>a && a>0 && b>0 && c>0)
        if(a==b && b==c)
            return "Tam giac deu.";
        else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
        {
            if(a==b || a==c || b==c){
                return "Tam giac vuong can";
            }else{
                return "Tam giac vuong";
            }
        }else 
            return "Tam giac thuong";
    else
        return "Khong phai la bo 3 canh cua tam giac";
}


int main() {
    int choice;
    do {
        printf("\n");
        printf("+-------------------------------+\n");
        printf("|    MENU CHUONG TRINH LAB 5    |\n");
        printf("+-------------------------------+\n");
        printf("1. Tim gia tri lon nhat trong 3 so \n");
        printf("2. Kiem tra nam nhuan \n");
        printf("3. Hoan vi 2 so(Su dung con tro) \n");
        printf("4. Kiem tra & phan loai tam giac \n");
        printf("5. Thoat chuong trinh \n");
        printf("+-------------------------------+\n");
        printf("Xin moi chon chuc nang(1-5): ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {
            case 1:
                int a, b, c;
                printf("Nhap vao 3 so: \n");
                scanf("%d %d %d", &a, &b, &c);
                
                printf("So lon nhat trong 3 so %d, %d, %d la: %d", a, b, c, findMax(a, b, c));
                break;
            case 2: 
                int year;
                printf("Nhap vao nam:");
                scanf("%d", &year);

                if (checkYear(year) == 1) {
                    printf("Nam nhuan \n");
                }
                else 
                    printf("Nam khong nhuan \n");
                break;
            case 3:
                int a1, b1;
                printf("Nhap vao 2 so a, b: ");
                scanf("%d %d", &a1, &b1);

                printf("Hai so a, b truoc khi hoan vi: a = %d,b = %d \n", a1, b1);
                swap(&a1, &b1);
                printf("Hai so a, b sau khi hoan vi: a = %d,b = %d \n", a1, b1);
                break;
            case 4:
                float a2, b2, c2;
                printf("Nhap vao 3 canh cua tam giac: ");
                scanf("%f %f %f", &a2, &b2, &c2);

                printf("%s \n", checkTriangle(a2, b2, c2));
                break;
            case 5:
                printf("Dang thoat chuong trinh \n");
                break;
            default:
            printf("Khong co chuc nang nay \n");
                break;
        }
    }while (choice != 5);

    return 0;
}