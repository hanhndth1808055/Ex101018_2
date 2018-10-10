#include <stdio.h>

int luongt13(int *namKinhNghiem, int *namLamViec) {
    int luongChinhThuc;
    if (*namKinhNghiem <= 2) {
        luongChinhThuc = 10000000;
    }
    if (*namKinhNghiem > 2 && *namKinhNghiem <= 5) {
        luongChinhThuc = 20000000;
    }
    if (*namKinhNghiem > 5) {
        luongChinhThuc = 20000000;
    }
    if (*namLamViec <= 1) {
        printf("Luong thang 13 la: %.2f\n", (float) luongChinhThuc * 0.3);
    }
    if (*namLamViec > 1 && *namLamViec <= 2) {
        printf("Luong thang 13 la: %.2f\n", (float) luongChinhThuc * 0.5);
    }
    if (*namLamViec > 2 && *namLamViec <= 5) {
        printf("Luong thang 13 la: %.2f\n", (float) luongChinhThuc);
    }
    if (*namLamViec > 5) {
        printf("Luong thang 13 la: %.2f\n", (float) luongChinhThuc * 2);
    }
    return 0;
}

int main() {
    int namKinhNghiem;
    int namLamViec;
    printf("Nhap so nam kinh nghiem.\n");
    scanf("%d", &namKinhNghiem);
    printf("Nhap so nam lam viec.\n");
    scanf("%d", &namLamViec);
    luongt13(&namKinhNghiem, &namLamViec);

    char choice;

    while (1) {
        printf("Nhap n/N neu muon dung chuong trinh.\n");
        scanf("%c", &choice);
        if (choice == 'n' || choice == 'N') {
            printf("Dung chuong trinh.");
            break;
        } else {
            luongt13(&namKinhNghiem, &namLamViec);
        }
    }


    return 0;
}