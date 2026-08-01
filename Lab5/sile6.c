#include <stdio.h>

int main(){
    int n = 50;
    int A[50];
    for(int i = 0; i<n;i++){
        printf("Nhap A[%d] = ",i);
        scanf("%d", &A[i]);
    }
    for(int i = 0; i<n;i++){
        printf("PT[%d] = %d\n",i+1,A[i]);
    }
    for(int i=0;i<n;i++)
       if(A[i]%2!=0){
           A[i]++;
    }
    return 0;
}