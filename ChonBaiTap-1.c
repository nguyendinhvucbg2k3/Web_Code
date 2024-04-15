#include <stdio.h>
#include <stdlib.h>

#define MA_SINH_VIEN 23017163
#define MA_DE 2

int main() {
    srand(MA_SINH_VIEN + MA_DE);
    printf("Bai tap cho sinh vien voi ma so %d:\n", MA_SINH_VIEN);
    int bai1 = rand() % 5 + 1 + (MA_DE-1)*5;
    printf("\t Bai1.%d\n", bai1);
    int bai2 = rand() % 5 + 1 + (MA_DE-1)*5;
    printf("\t Bai2.%d\n", bai2);
    int bai3 = rand() % 5 + 1 + (MA_DE-1)*5;
    printf("\t Bai3.%d\n", bai3);
    return 0;
}