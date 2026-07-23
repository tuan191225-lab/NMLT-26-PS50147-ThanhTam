#include <stdio.h>
int main(){
    for (int i = 1; i <= 10; i++) {
        printf("\n");
        for (int j = 2; j <= 10; j++) {
            printf("%2d x %2d = %3d\t", j, i, i * j);
        }
        
    }
    return 0;
}