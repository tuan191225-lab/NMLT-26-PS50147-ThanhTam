#include <stdio.h>
#include <string.h>

int main() {
    char hoTen[20];
    char hoTen2[20];
    char nghenghiep[20];
    printf("Nhap vao ho ten: ");
    //scanf("%s", hoTen);
    gets(hoTen);
    // hoTen2 = hoTen;
    strcpy(hoTen2, hoTen);

    printf("Nhap vao nghe nghiep: ");
    //scanf("%s", nghenghiep);
    gets(nghenghiep);

    for(int i = 0; i < strlen(hoTen); i++) {
        printf("%c",hoTen[i]);
    }
    printf("\n\n");
    for(int i = 0; i < strlen(nghenghiep); i++) {
        printf("%c",nghenghiep[i]);
    }
    return 0;
}