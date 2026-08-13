#include <stdio.h>
int main(){
    struct PhanSo
    {
        int tuSo;
        int mauSo;
    };

    struct PhanSo ps1,ps2,tongPS,hieuPS,tichPS,thuongPS;
    // Nhập
    printf("Nhap phan so thu nhat:\n );
    printf("Tu: ");
    scanf("%d",&ps1.tuSo);
    printf("Mau: ");
    scanf("%d",&ps1.mauSo);

    printf("Nhap phan so thu hai:\n");
    printf("Tu: "); 
    scanf("%d",&ps2.tuSo);
    printf("Mau: ");
    scanf("%d",&ps2.mauSo);
     
    //mau chung
    tongPS.tu = ps1.tuSo * ps2.mauSo + ps2.tuSo * ps1.mauSo;
    // 4/5 + 5/9 = ?/?
    tongPS.mau = ps1.mauSo * ps2.mauSo;
    printf("Tong hai phan so la: %d/%d + %d/%d = %d/%d\n", ps1.tuSo, ps1.mauSo, ps2.tuSo, ps2.mauSo, tongPS.tu, tongPS.mau);
      
    return 0;
}