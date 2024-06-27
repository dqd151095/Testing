#include <stdio.h>

// Hàm nhập mảng từ bàn phím
void nhapMang(int a[], int *n) {
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

// Hàm tìm giá trị lớn nhất trong mảng
int timGiaTriLonNhat(int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}
// Hàm tìm giá trị nho nhất trong mảng
int timGiaTriNhoNhat(int a[], int n) {
    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}

// Hàm in giá trị lớn nhất
void inGiaTriLonNhat(int max) {
    printf("Gia tri lon nhat trong mang la: %d\n", max);
}
// Hàm in giá trị nho nhất
void inGiaTriNhoNhat(int min) {
    printf("Gia tri nho nhat trong mang la: %d\n", min);
}
int main() {
    int a[100];
    int n;
    
    nhapMang(a, &n);
    int max = timGiaTriLonNhat(a, n);
    inGiaTriLonNhat(max);
    int min = timGiaTriNhoNhat(a, n);
    inGiaTriLonNhat(min);
    
    return 0;
}