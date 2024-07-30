#include <stdio.h>
#include <string.h>

//struct SinhVien
typedef struct {
    char ten[50];
    char maSinhVien[20];
    float diemToan;
    float diemLy;
    float diemHoa;
} SinhVien;

// Hàm khởi tạo SinhVien
SinhVien taoSinhVien() {
    SinhVien sv;
    printf("Nhap ten sinh vien: ");
    fgets(sv.ten, sizeof(sv.ten), stdin);
    sv.ten[strcspn(sv.ten, "\n")] = '\0'; // Xóa ký tự newline nếu có
    
    printf("Nhap ma sinh vien: ");
    fgets(sv.maSinhVien, sizeof(sv.maSinhVien), stdin);
    sv.maSinhVien[strcspn(sv.maSinhVien, "\n")] = '\0'; // Xóa ký tự newline nếu có
    
    printf("Nhap diem Toan: ");
    scanf("%f", &sv.diemToan);
    
    printf("Nhap diem Ly: ");
    scanf("%f", &sv.diemLy);
    
    printf("Nhap diem Hoa: ");
    scanf("%f", &sv.diemHoa);
    
    // Xóa bộ nhớ đệm để tránh lỗi khi nhập lại từ bàn phím
    while(getchar() != '\n');
    
    return sv;
}

// Hàm in thông tin sinh viên trên cùng một hàng
void inThongTinSinhVien(SinhVien sv) {
    printf("%s\t%s\t%.2f\t%.2f\t%.2f\n", sv.ten, sv.maSinhVien, sv.diemToan, sv.diemLy, sv.diemHoa);
}

int main() {
    int soSinhVien;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &soSinhVien);
    while(getchar() != '\n'); // Xóa bộ nhớ đệm để tránh lỗi khi nhập
    
    SinhVien sinhVien[soSinhVien];

    for (int i = 0; i < soSinhVien; i++) {
        printf("\nNhap thong tin sinh vien %d:\n", i + 1);
        sinhVien[i] = taoSinhVien();
    }

    // In thông tin tiêu đề
    printf("\nTen\tMSV\tToan\tLy\tHoa\n");
    printf("---------------------------------------------------------------\n");

    // In thông tin các sinh viên đã nhập
    for (int i = 0; i < soSinhVien; i++) {
        inThongTinSinhVien(sinhVien[i]);
    }

    return 0;
}