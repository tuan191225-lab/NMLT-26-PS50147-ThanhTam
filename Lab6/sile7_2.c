#include <stdio.h>
#include <string.h>

int main(){
    char string1[20] = "FpT PoLYtechnic HCM";// = {'A','B','C'}
    char string2[20] = " ";
    printf("Chuoi 1: %s\n",string1);
    strlwr(string1);
    printf("Chuoi 2: %s\n",string1);

    return 0;
}