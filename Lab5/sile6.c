#include <stdio.h>
#define n 5
int main(){
    //int n = 5
    int B[n] = {3,6,4,7,2};// Khai bao mang B gom 5 phan tu
    for(int i=0;i<n;i++){
        printf("Nhap B[%d] = ", i);
        scanf("%d", &B[i]);
    }
    //xuat mang
    printf("Xuat mang B moi nhap:\n");
    for(int i=0;i<n;i++){
        printf("B[%d] = %d \n",i,B[i]);
        
    }
    //mang hai chieu
    //0 1 2 3 4
    //6 4 8 7 9
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(B[i] > B[j]){
                int temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }
   
    return 0;
}